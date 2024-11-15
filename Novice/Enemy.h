#pragma once
#include "Vector2.h"
#include <stdlib.h>
#include<random>
class Enemy {
public:
	void Init();
	void Update();
	void Draw();

private:

	Vector2 posx_,posy_;



};
