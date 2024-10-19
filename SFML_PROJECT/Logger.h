#include <conio.h>
#include <iostream>
#include <string>
#pragma once

using namespace std;

void log(string sender, string message) {
	cout << "[ " + sender + " ]: " + message << endl;
}