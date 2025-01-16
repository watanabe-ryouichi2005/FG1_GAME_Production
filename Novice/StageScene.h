#pragma once

#pragma once
#include "IScene.h"
#include "Vector2.h"

class StageScene : public IScene {
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

private:
	Vector2 stageBackground_{610, 0};
	Vector2 backGroundWall_[2]{0, 0, 1310, 0};
	Vector2 botton_[4]{656, 848, 620, 892, 656, 892, 692, 892};
	Vector2 stage1_Icon_{715,278};
	Vector2 unknownStagePos_{715+200,278};
	Vector2 unknownStage2Pos_{715+400,278};
	Vector2 unknownStage3Pos_{715,278+200};
	Vector2 unknownStage4Pos_{715+200,278+200};
	Vector2 unknownStage5Pos_{715+400,278+200};
	Vector2 selecting_{};

	float selectPosX = stage1_Icon_.x;
	float selectPosY = stage1_Icon_.y;
	int selectTex_;
	int unknowStage_IconTex;
	int stage1_IconTex_;
	int stageBackgroundTexture_;
	int backGroundWallTexture_[2];
	int bottonTexture_[4];
	float time_ = 0.1f;
};