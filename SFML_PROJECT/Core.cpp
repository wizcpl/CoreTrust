#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <vector>
#include <thread>

//
// Core helpers
//

#include "Bootloader.h"
#include "CommandPromt.h"
#include "Logger.h"
#include "AppsOpener.h"
#include "UIPhysx.h"
#include "CoreUI.h"

//
// Default components
//

#define COREVER "1.0.0 ALPHA"

//
// Namespaces
//

using namespace sf;
using namespace std;

//
// Data
//

bool start = false;

//
// cmdHelper
//

void run_services() {
	boot boot;
	boot.bootup();
}

class graphics {
public:
	vector <int>sprites = {};
	void getboot() {
		for (int i = 0; i < sprites.size(); ++i) {

		}
	}
};

//
// Core Executor
//

int main() {
	setlocale(LC_ALL, "rus");
	thread th;
	log("SYSCORE", "Starting CoreTrust...");
	log("SYSCORE", "Running version: " COREVER);
	RenderWindow window(VideoMode(750, 750), "CoreTrust " COREVER);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		Sprite pl;
		window.clear();
		window.display();
		// Execute Helpers
		if (start == false) {
			start = true;
			run_services();
		}
		cmdMain();
		//
	}
	return 0;
}