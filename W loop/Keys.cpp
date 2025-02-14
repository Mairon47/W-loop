#include <Windows.h>
#include "Keys.h"

void PressKey(WORD scanKey)
{
	INPUT input = { 0 };
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = scanKey;
	input.ki.dwFlags = KEYEVENTF_SCANCODE;
	SendInput(1, &input, sizeof(INPUT));
}

void ReleaseKey(WORD scanKey)
{
	INPUT input = { 0 };
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = scanKey;
	input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(INPUT));
}