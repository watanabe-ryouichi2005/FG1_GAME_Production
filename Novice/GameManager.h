#pragma once

#include "ClearScene.h"
#include "IScene.h"
#include "StageScene.h"
#include "TitleScene.h"
#include <Novice.h>
#include <memory>

class GameManager {
public:
	GameManager();

	~GameManager();

	int Run(char* keys, char* preKeys);

private:
	// keeps track of the scenes
	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int prevSceneNo_;
};