#pragma once
#include "Vector2.h"

class BossBullet {
public:
	BossBullet(Vector2 pos, int speed, float angle);
	void Update();
	void Draw();
	float GetX();
	float GetY();
	float GetRadius();
public:
	Vector2 pos_;        // 弾の位置
	int speed_;          // 弾の速度
	float angle_;        // 弾丸の進行方向（ラジアン）
	int bulletTexture_;  // 弾のスプライト画像
	bool hitBox_ = true; // ヒットボックスを描画するかどうかのフラグ
};