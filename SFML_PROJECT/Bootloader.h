#include <SFML/Graphics.hpp>
#include <conio.h>
#include "Logger.h"
#pragma once

using namespace sf;

class boot {
public:
	void runservices(bool safe = false) {
		log("Service Runner", "Run safe services? [Y/N]");
		char yn = _getch();
		if (yn == 'Y' || yn == 'y') {
			cout << "OK";
		} else if (yn == 'N' || yn == 'n') {

		}
		while (yn != 'Y' || yn != 'y' || yn != 'N' || yn != 'n') {
			yn = _getch();
		}
	}
	void bootup() {
		Sprite ico;
		Texture icon;
		IntRect size(13, 13, 0, 0);
		icon.loadFromFile("bootimg.png", size);
		ico.setTexture(icon);
		ico.setPosition(750 / 2, 750 / 2 + 250);
		runservices();
	}
};