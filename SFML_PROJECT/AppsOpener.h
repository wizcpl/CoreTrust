#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Logger.h"
#include <Windows.h>
#pragma once

using namespace std;

void getapps(bool run = true) {
	if (run == true) {
		char userbuff[256];
		DWORD usersize;
		GetUserNameA(userbuff, &usersize);
		string username = userbuff;
		string path = "C:\\Users\\" + username + "\\AppData\\Local\\CoreTrustExtern";
		ifstream list(path);
		vector<string> listapps;
		if (!list) {
			log("AppsManager", "Directory Error! Creating source directory at ''" + path + "''...");
			int pathlen = path.length();
			ofstream appslist(path);
		}
		else {

		}
	}
}