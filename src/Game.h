#pragma once
#ifndef Game_hpp
#define Game_hpp

#include "SDL.h"
#include "SDL_image.h"
#include <stdio.h>
#include <iostream>

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void handleEvents();
	void update();
	bool running() { return isRunning; }
	void render();
	void clean();



	static SDL_Renderer* renderer;


private:
	bool isRunning = false;
	SDL_Window *window;

	int cnt = 0;

};


#endif