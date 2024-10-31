#pragma once
// #include "Enemy.h"
#include "IScene.h"
#include "Player.h"
#include "Vector2.h"

class StageScene : public IScene {
public:
	void Init() override;
	~StageScene();
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

public:
	Player* player_;
	// Enemy* enemy_;
};