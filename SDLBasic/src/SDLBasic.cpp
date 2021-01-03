//============================================================================
// Name        : SDLBasic.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

//create a particle explosion animation graphic using the SDL library
// https://www.libsdl.org/

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
#include <stdlib.h>
using namespace std;
using namespace tut;

int main() {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		cout << "Error intitializing SDL." << endl;
	}

	Swarm swarm;

	while (true) { 			//game loop/event loop
		//update particles

		//draw particles

		int elapsed = SDL_GetTicks();


		//screen.clear();
		swarm.update(elapsed);

		int red = (1 + sin(elapsed * 0.0001)) * 128;
		int green = (1 + sin(elapsed * 0.0002)) * 128;
		int blue = (1 + cos(elapsed * 0.0003)) * 128;

		const Particle * const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++){
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
			int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red, green, blue);
		}



		/*for(int y=0; y< Screen::SCREEN_HEIGHT; y++){
			for(int x = 0; x < Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x, y, red, green, blue); //255, 197, 0 is CAT yellow
			}
		}*/
		//screen.setPixel(400, 300, 255, 255, 255);

		screen.boxBlur();

		//Draw the screen
		screen.update();

		//check for messages/events

		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
