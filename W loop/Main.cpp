#include <iostream>
#include <Windows.h>
#include "Keys.h"

int main()
{
	bool isOn = false;
	bool wasPressed = false;
	bool isHeld = false;

	while (true)
	{
		if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
		{
			if (!wasPressed)
			{
				isOn = !isOn;
				std::cout << "Toggled: " << (isOn ? "ON" : "OFF") << std::endl;
				wasPressed = true;
			}
		}
		else
		{
			wasPressed = false;
		}

		if (isOn)
		{
			PressKey(0x11);

			if (!isHeld)
				std::cout << "Pressing W\n" << std::endl;

			isHeld = true;
		}
		else if (!isOn && isHeld)
		{
			ReleaseKey(0x11);
			isHeld = false;
			std::cout << "Releasing W\n" << std::endl;
		}

		Sleep(50);
	}

	return 0;
}