#include <SDL.h>
#include <SDL_mixer.h>
#include<stdio.h>

#include "game.h"
#include "graphics.h"
#include "input.h"
#include <algorithm>



//this class holds all the information for main game loop



namespace {
	const int FPS = 50;
	const int MAX_FRAME_TIME = 5 * 1000 / FPS;

}
Game::Game() {
	SDL_Init(SDL_INIT_EVERYTHING);
	
	this->gameLoop();
}

Game::~Game() {
}

void Game::gameLoop() {
	Graphics graphics;
	Input input;
	SDL_Event event;
	//loads player sprite
	
	
	

	
	
	this->_level = Level("map 1", Vector2(100, 100), graphics);
	


	int LAST_UPDATE_TIME = SDL_GetTicks();

	//start the game loop

	while (true) {
		input.beginNewFrame();

		if (SDL_PollEvent(&event)) {
			if (event.type == SDL_KEYDOWN) {

				if (event.key.repeat == 0) {
					input.keyDownEvent(event);
				}
			}
			else if (event.type == SDL_KEYUP) {
				input.keyUpEvent(event);
			}

			else if (event.type == SDL_QUIT) {

				return;
			}
		}
		if (input.wasKeyPressed(SDL_SCANCODE_ESCAPE) == true) {
			
			
			return;
		}
		else if (input.wasKeyPressed(SDL_SCANCODE_1) == true) {
			
			this->_player = Player(graphics, -50, 100);
			this->_player.moveRight();
			
			
		}
		else if (input.wasKeyPressed(SDL_SCANCODE_2) == true) {
			
			this->_enemy2 = Enemy(graphics, -50, 150);
			this->_enemy2.moveRight();
		
		
		
		}
		else if (input.wasKeyPressed(SDL_SCANCODE_3) == true) {
			


			this->_enemy3 = Enemyred(graphics, -50, 200);
			
			this->_enemy3.moveRight();
			

		}
		else if (input.wasKeyPressed(SDL_SCANCODE_4) == true) {


			this->_enemy4 = EnemyYellow(graphics, -50, 250);
			this->_enemy4.moveRight();




		}
		else if (input.wasKeyPressed(SDL_SCANCODE_A) == true) {


			this->_enemy7 = EnemyYellow(graphics, -50, 250);
			this->_enemy7.moveRight();




		}
		else if (input.wasKeyPressed(SDL_SCANCODE_S) == true) {


			this->_enemy8 = EnemyYellow(graphics, -50, 200);
			this->_enemy8.moveRight();




		}
		else if (input.wasKeyPressed(SDL_SCANCODE_W) == true) {


			this->_enemy9 = EnemyYellow(graphics, -50, 150);
			this->_enemy9.moveRight();




		}
		else if (input.wasKeyPressed(SDL_SCANCODE_Q) == true) {


			this->_enemy10 = EnemyYellow(graphics, -50, 150);
			this->_enemy10.moveRight();




		}
		else if (input.wasKeyPressed(SDL_SCANCODE_5) == true) {


			this->_enemy5 = EnemyPurple(graphics, -50, 300);
			this->_enemy5.moveRight();



		}
		else if (input.wasKeyPressed(SDL_SCANCODE_6) == true) {


			
			this->_purple = Turrentpurple(graphics, 600, 100);
			this->_purple.stopMoving();



		}
		else if (input.wasKeyPressed(SDL_SCANCODE_7) == true) {

			this->_red = Turrentred(graphics, 600, 150);
			this->_red.stopMoving();
			




		}
		else if (input.wasKeyPressed(SDL_SCANCODE_8) == true) {


			
			this->_green = Turrentgreen(graphics, 600, 200);
			this->_green.stopMoving();



		}
		else if (input.wasKeyPressed(SDL_SCANCODE_9) == true) {



			this->_blue = Turrentblue(graphics, 600, 250);
			this->_blue.stopMoving();



		}
		else if (input.wasKeyPressed(SDL_SCANCODE_0) == true) {



			this->_yellow = Turrentyellow(graphics, 600, 300);
			this->_yellow.stopMoving();



		}
		

		const int CURRENT_TIME_MS = SDL_GetTicks();
		 int ELAPSED_TIME_MS = CURRENT_TIME_MS - LAST_UPDATE_TIME;
		this->update(std::min(ELAPSED_TIME_MS, MAX_FRAME_TIME));
		LAST_UPDATE_TIME = CURRENT_TIME_MS;
		
		this->draw(graphics);
	}
}

void Game::draw(Graphics &graphics) {
	graphics.clear();
	this->_level.draw(graphics);
	
	this->_player.draw(graphics);
	this->_enemy2.draw(graphics);
	this->_enemy3.draw(graphics);
	this->_enemy4.draw(graphics);
	this->_enemy5.draw(graphics);
	this->_enemy6.draw(graphics);
	this->_enemy7.draw(graphics);
	this->_enemy8.draw(graphics);
	this->_enemy9.draw(graphics);
	this->_enemy10.draw(graphics);

	this->_purple.draw(graphics);
	this->_red.draw(graphics);
	this->_green.draw(graphics);
	this->_blue.draw(graphics);
	this->_yellow.draw(graphics);


	graphics.flip();
}

void Game::update(float elapsedTime) {

	this->_player.update(elapsedTime);
	this->_enemy2.update(elapsedTime);
	this->_enemy3.update(elapsedTime);
	this->_enemy4.update(elapsedTime);
	this->_enemy5.update(elapsedTime);
	this->_enemy6.update(elapsedTime);
	this->_enemy7.update(elapsedTime);
	this->_enemy8.update(elapsedTime);
	this->_enemy9.update(elapsedTime);
	this->_enemy10.update(elapsedTime);

	this->_purple.update(elapsedTime);
	this->_red.update(elapsedTime);
	this->_green.update(elapsedTime);
	this->_blue.update(elapsedTime);
	this->_yellow.update(elapsedTime);


	this->_level.update(elapsedTime);
}