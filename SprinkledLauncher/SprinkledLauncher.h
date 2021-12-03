#pragma once

/*
    Sprinkled Launcher - a minimalist WIN32 API launcher for Doom Source Ports
    Copyright (C) 2021  Adam Bilbrough

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "resource.h"

// This file hold the global variables in-use in SprinkledLauncher.cpp

// Global Variables:
HINSTANCE hInst;                                // current instance

// Help text
const wchar_t* help = L"   Commands:\n   -iwad <- the path to your DOOM.WAD/DOOM2.WAD/TNT.WAD etc...\n   -file <- the path to any PWAD files or .deg files to load alongside the IWAD\n   -skill <integer> <- 1 - 5 in order of difficulty.  Example (-skill 4 <- is ultra violence)\n   -warp <- level to warp to on game start (-warp 1 1 <- E1M1 for DOOM or -warp 7 <- MAP07 for DOOM2)\n   -fullscreen <- forces fullscreen mode. Alternaitvely -window forces windowed mode.\n   -record <name> <- record a game. Example (-record test)\n   -playdemo <name> <- plays back a recorded demo. Example (-playdemo test)\n\n   Command line arguments:\n";

// The window for the Command Line Arguments edit control
HWND CommandLineArgs;

// The integer for the length of our argument string
int argTextLength;

// The string that we will use to get our arguments
LPTSTR argText;
