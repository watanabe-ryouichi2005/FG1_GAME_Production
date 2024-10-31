#include "ClearScene.h"
#include <Novice.h>

void ClearScene::Init() {}

void ClearScene::Update(char* keys, char* preKeys) {
	if (!preKeys[DIK_RETURN] && keys[DIK_RETURN]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() { Novice::DrawBox(0, 0, 1920, 1080, 0.0f, 0xffff0064, kFillModeSolid); }