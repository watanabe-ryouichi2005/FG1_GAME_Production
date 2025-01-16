#include "StageScene.h"
#include <Novice.h>
#include<math.h>

void StageScene::Init() {
	stageBackgroundTexture_ = Novice::LoadTexture("./Resources/Scene/StageBackground.png"); 
	backGroundWallTexture_[0] = Novice::LoadTexture("./Resources/Scene/wall.png");
	backGroundWallTexture_[1] = Novice::LoadTexture("./Resources/Scene/wall.png");
	bottonTexture_[0] = Novice::LoadTexture("./Resources/Scene/Wbotton.png");
	bottonTexture_[1] = Novice::LoadTexture("./Resources/Scene/Abotton.png");
	bottonTexture_[2] = Novice::LoadTexture("./Resources/Scene/Sbotton.png");
	bottonTexture_[3] = Novice::LoadTexture("./Resources/Scene/Dbotton.png");
	stage1_IconTex_ = Novice::LoadTexture("./Resources/StageSelectIcon/MoonPlanet.png");
	unknowStage_IconTex = Novice::LoadTexture("./Resources/StageSelectIcon/UnknowStage.png");
	selectTex_ = Novice::LoadTexture("./Resources/StageSelectIcon/Selecting.png");

}

void StageScene::Update(char* keys, char* preKeys) {

	/*if ( !preKeys[DIK_S] && keys[DIK_S]) {
		unknownStage3Pos_.y -= 2.0f;
	} else {
		unknownStage3Pos_.y = 278+200;
	}*/

	


	if (!preKeys[DIK_RETURN] && keys[DIK_RETURN]) {
		sceneNo = GAME;

	}
}

void StageScene::Draw() { 
	Novice::DrawSprite((int)stageBackground_.x, (int)stageBackground_.y, stageBackgroundTexture_, 1, 1, 0.0f, 0xffffffff); 
	for (int i = 0; i < 2; i++) {
		Novice::DrawSprite((int)backGroundWall_[i].x, (int)backGroundWall_[i].y, backGroundWallTexture_[i], 1, 1, 0.0f, 0xffffffff);
	}
	for (int i = 0; i < 4; i++) {
		Novice::DrawSprite((int)botton_[i].x, (int)botton_[i].y, bottonTexture_[i], 1, 1, 0.0f, 0xffffffff);
	}
	Novice::DrawSprite((int)stage1_Icon_.x, (int)stage1_Icon_.y, stage1_IconTex_, 0.2f, 0.2f, 0.0f, 0xffffffff);
	Novice::DrawSprite((int)selectPosX+15, (int)selectPosY-20, selectTex_, 2.0f, 1.0f, 0.0f, 0xffffffff);
	Novice::DrawSprite((int)unknownStagePos_.x,(int)unknownStagePos_.y, unknowStage_IconTex, 0.2f, 0.2f, 0.0f, 0xffffffff);
	Novice::DrawSprite((int)unknownStage2Pos_.x,(int)unknownStage2Pos_.y, unknowStage_IconTex, 0.2f, 0.2f, 0.0f, 0xffffffff);
	Novice::DrawSprite((int)unknownStage3Pos_.x,(int)unknownStage3Pos_.y, unknowStage_IconTex, 0.2f, 0.2f, 0.0f, 0xffffffff);
	Novice::DrawSprite((int)unknownStage4Pos_.x,(int)unknownStage4Pos_.y, unknowStage_IconTex, 0.2f, 0.2f, 0.0f, 0xffffffff);
	Novice::DrawSprite((int)unknownStage5Pos_.x,(int)unknownStage5Pos_.y, unknowStage_IconTex, 0.2f, 0.2f, 0.0f, 0xffffffff);
	

}