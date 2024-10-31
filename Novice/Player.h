#pragma once
#include "Vector2.h"

class Player {
public:
	Vector2 pos_;
	int radius_;
	int speed_;

public:
	Player(Vector2 pos, int radius, int speed);
	~Player();
	void Update(char* keys, char* preKeys);
	void Draw();
};