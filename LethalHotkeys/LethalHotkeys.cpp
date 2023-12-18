// LethalHotkeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//half of these are necessisary but im to lazy to remove them
#include <iostream>
#define WINVER 0x0500
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include "string"
#include <fstream>
#include <shellapi.h>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <bitset>

//types out "switch"
void typeSwitch()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [s]
	ip.ki.wVk = 0x53; // virtual-key code for the "s" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [s]
	ip.ki.wVk = 0x53;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [w]
	ip.ki.wVk = 0x57; // virtual-key code for the "w" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [w]
	ip.ki.wVk = 0x57;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [i]
	ip.ki.wVk = 0x49; // virtual-key code for the "i" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [i]
	ip.ki.wVk = 0x49;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [t]
	ip.ki.wVk = 0x54; // virtual-key code for the "t" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [t]
	ip.ki.wVk = 0x54;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [c]
	ip.ki.wVk = 0x43; // virtual-key code for the "c" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [c]
	ip.ki.wVk = 0x43;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [h]
	ip.ki.wVk = 0x48; // virtual-key code for the "h" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [h]
	ip.ki.wVk = 0x48;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

//types out "grim"
void typeGrim()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [g]
	ip.ki.wVk = 0x47; // virtual-key code for the "g" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [g]
	ip.ki.wVk = 0x47;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [r]
	ip.ki.wVk = 0x52; // virtual-key code for the "r" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [r]
	ip.ki.wVk = 0x52;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [i]
	ip.ki.wVk = 0x49; // virtual-key code for the "i" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [i]
	ip.ki.wVk = 0x49;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [m]
	ip.ki.wVk = 0x4D; // virtual-key code for the "m" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [m]
	ip.ki.wVk = 0x4D;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

//types out "squid"
void typeSquid()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [s]
	ip.ki.wVk = 0x53; // virtual-key code for the "s" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [s]
	ip.ki.wVk = 0x53;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [q]
	ip.ki.wVk = 0x51; // virtual-key code for the "q" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [q]
	ip.ki.wVk = 0x51;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [u]
	ip.ki.wVk = 0x55; // virtual-key code for the "u" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [u]
	ip.ki.wVk = 0x55;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [i]
	ip.ki.wVk = 0x49; // virtual-key code for the "i" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [i]
	ip.ki.wVk = 0x49;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [d]
	ip.ki.wVk = 0x44; // virtual-key code for the "d" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [d]
	ip.ki.wVk = 0x44;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

//types out "osyl"
void typeOsyl()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [o]
	ip.ki.wVk = 0x4F; // virtual-key code for the "o" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [o]
	ip.ki.wVk = 0x4F;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [s]
	ip.ki.wVk = 0x53; // virtual-key code for the "s" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [s]
	ip.ki.wVk = 0x53;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [y]
	ip.ki.wVk = 0x59; // virtual-key code for the "y" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [y]
	ip.ki.wVk = 0x59;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

	//pushes [l]
	ip.ki.wVk = 0x4C; // virtual-key code for the "l key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [l]
	ip.ki.wVk = 0x4C;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

}

//presses [space]
void pressSpace()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [space]
	ip.ki.wVk = 0x20; // virtual-key code for the "space" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [space]
	ip.ki.wVk = 0x20;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

//presses [backspace]
void pressBackspace()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [space]
	ip.ki.wVk = 0x08; // virtual-key code for the "Backspace" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [space]
	ip.ki.wVk = 0x08;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

//presses [enter]
void pressEnter()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//pushes [enter]
	ip.ki.wVk = 0x0D; // virtual-key code for the "enter" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	//unpushes [enter]
	ip.ki.wVk = 0x0D;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

void typeText(std::string text)
{
	//Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; //hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	//Converts text to array
	char* textArray = new char[text.length() + 1];
	strcpy_s(textArray, text.length() + 1, text.c_str());
	int asciiCode;

	for (int i = 0; i <= text.length(); i++)
	{
		asciiCode = (int)textArray[i]; //converts from text to ascii code
		if (asciiCode > 93) //converts from lowercase ascii to upercase ascii
		{
			asciiCode -= 32;
		}
		//pushes [space]
		ip.ki.wVk = asciiCode; // virtual-key code for the "Backspace" key
		ip.ki.dwFlags = 0; // 0 for key press
		SendInput(1, &ip, sizeof(INPUT));

		//unpushes [space]
		ip.ki.wVk = asciiCode;
		ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
		SendInput(1, &ip, sizeof(INPUT));
	}
}

//spams every single door, turret, or landmine
void globalLockdown()
{
	// Creates keyboard setup
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	for (int i = 65; i <= 90; i++) //keycodes for alphabet start at 0x41 or 65, function converts the decimal to hex for you
	{
		for (int i2 = 48; i2 <= 57; i2++) //keycodes for numbers start at 0x30 or 48
		{
			//pushes alphabetical key
			ip.ki.wVk = i; // virtual-key code, gets converted to hex in function
			ip.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &ip, sizeof(INPUT));
			ip.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &ip, sizeof(INPUT));

			//pushes number key
			ip.ki.wVk = i2; // virtual-key code, gets converted to hex in function
			ip.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &ip, sizeof(INPUT));
			ip.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &ip, sizeof(INPUT));
			
			Sleep(2);

			//pushes [enter]
			ip.ki.wVk = 0x0D; // virtual-key code for the "enter" key
			ip.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &ip, sizeof(INPUT));
			ip.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &ip, sizeof(INPUT));
		}
	}
}

int main()
{
	std::cout << "Lethal Company Keybinds:\n\n";
	std::cout << "[NUMPAD0]: switch\n";
	std::cout << "[NUMPAD1]: switch osyl\n";
	std::cout << "[NUMPAD2]: switch grimm\n";
	std::cout << "[NUMPAD3]: switch squid\n";
	std::cout << "[NUMPAD4]: switch potatoes\n";
	std::cout << "[NUMPAD5]: switch edgypunk\n";
	std::cout << "[NUMPAD6]: switch soph\n";
	//std::cout << "[NUMPAD7]: switch [user]\n";
	//std::cout << "[NUMPAD8]: switch [user]\n";
	//std::cout << "[NUMPAD9]: switch [user]\n";
	std::cout << "\n[NUMPAD+]: scan\n";
	std::cout << "\n[NUMPAD-]: {GlobalLockdown}\n";
	while (1)
	{
		if (GetKeyState(VK_NUMPAD0) & 0x8000)
		{
			pressBackspace();
			typeSwitch();
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD1) & 0x8000)
		{
			pressBackspace();
			typeText("switch osyl");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD2) & 0x8000)
		{
			pressBackspace();
			typeText("switch grimm");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD3) & 0x8000)
		{
			pressBackspace();
			typeText("switch squid");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD4) & 0x8000)
		{
			pressBackspace();
			typeText("switch potatoes");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD5) & 0x8000)
		{
			pressBackspace();
			typeText("switch edgypunk");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD6) & 0x8000)
		{
			pressBackspace();
			typeText("switch soph");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD7) & 0x8000)
		{
			pressBackspace();
			typeText("flash ");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD8) & 0x8000)
		{
			pressBackspace();
			//typeText("switch [user]");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_NUMPAD9) & 0x8000)
		{
			pressBackspace();
			//typeText("switch [user]");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_ADD) & 0x8000)
		{
			pressBackspace();
			typeText("scan");
			pressEnter();
			Sleep(100);
		}
		else if (GetKeyState(VK_SUBTRACT) & 0x8000)
		{
			pressBackspace();
			globalLockdown();
			Sleep(100);
		}
	}
}
