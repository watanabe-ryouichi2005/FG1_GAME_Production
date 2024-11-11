#include "StageScene.h"
#include "Player.h"

#include <Novice.h>
#include <math.h>

StageScene::~StageScene() {
	delete player_;
	// delete enemy_;
}

void StageScene::Init() {
	player_ = new Player({1920 / 2, 1080 / 2}, 24, 3);
	groundSprite_ = Novice::LoadTexture("./GameResources/GroundSprit.png");

	// enemy_ = new Enemy({100, 300}, 3, 16, true);
}

void StageScene::Update(char* keys, char* preKeys) {
	player_->Update(keys, preKeys);
	// enemy_->Update();

	/*float r1 = (float)enemy_->radius_;
	float r2 = (float)player_->bullet_->r_;

	float a = enemy_->pos_.x - player_->bullet_->pos_.x;
	float b = enemy_->pos_.y - player_->bullet_->pos_.y;
	float distance = sqrtf(a * a + b * b);

	if (distance <= r1 + r2) {
	    sceneNo = CLEAR;
	}*/
}

void StageScene::Draw() {
	//Novice::DrawBox(0, 0, 1920, 1080, 0.0f, 0x00000064, kFillModeSolid);
	Novice::DrawSprite(0, 0, groundSprite_, 1.0f, 1.0f, 0.0f, WHITE);
	player_->Draw();
	// enemy_->Draw();
}