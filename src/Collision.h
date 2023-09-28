#pragma once
#include <SDL.h>

class Collision {
public:
	//Axis Aligned Bounding Box collision method
	static bool AABB(const SDL_Rect& rectA, const SDL_Rect& recB);
};