W Loop (Toggle Script)
A simple C++ console program that toggles continuous pressing of the W key using Mouse4 (the first side mouse button). When toggled ON, the script simulates holding down W; when toggled OFF, it stops.

How It Works
Mouse4 Toggle

The script uses GetAsyncKeyState(VK_XBUTTON1) to detect when Mouse4 is pressed.
Each press toggles an isOn state (ON ↔ OFF).
Press/Release W

If isOn is true, the program continuously calls PressKey(0x11), sending scan code presses for W.
When toggled OFF, it calls ReleaseKey(0x11) to release W.

Prevent CPU Overuse
There’s a Sleep() call inside the loop to reduce CPU usage while polling for Mouse4.

Building
Clone or Download the .cpp file.
Compile using a C++ compiler that supports at least C++11 (e.g., Visual Studio, MinGW).
Run the resulting .exe.

Usage
Run the compiled WLoop.exe.
Press Mouse4 to toggle “ON” (it starts pressing W).
Press Mouse4 again to toggle “OFF” (it releases W).
Close the console window or hit Ctrl + C to exit.

Notes
Scan Code 0x11 is typically for W on QWERTY keyboards.
Administration: In some games or contexts, you may need to run as Administrator if the target app has elevated permissions.
Anti-Cheat: Certain games block or ignore simulated input, so it may not work in all scenarios.

Enjoy your W loop toggle script! Feel free to modify the code for different keys, intervals, or toggle methods.
