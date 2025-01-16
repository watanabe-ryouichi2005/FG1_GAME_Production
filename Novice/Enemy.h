#pragma once
#define _USE_MATH_DEFINES
#include "Vector2.h"
#include <math.h>

class Enemy {
public:
	Enemy(Vector2 pos, int s, int r, int isAlive);
	void Update();
	void Draw();
	void Position();
	float GetX();
	float GetY();
	float GetRadius();
public:
	int maxX;
	int minX;
	int randPosX_;
	Vector2 pos_;
	int enemyTex;
	int speed_;
	int radius_;
	bool isAlive_;
};