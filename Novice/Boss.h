#pragma once
#include "Vector2.h"
#include "BossBullet.h"
#include "RotatingBullet.h"
#include <vector>

class Boss {
public:
	Boss(Vector2 pos, float speed);
	~Boss();
	void Update();
	void Draw();
	float GetX();
	float GetY();
	float GetRadius();
private:
	Vector2 pos_;                    // ボスの位置
	float speed_;                    // ボスの移動速度
	int moveDirection_;              // 移動方向：1 = 右、-1 = 左、2 = 下、-2 = 上
	bool isMoving_;                  // ボスが動くか止まるかのフラグ
	float moveTimer_;                // ボスが止まるか動くかを切り替えるためのタイマー
	bool isBossActive_;              // ボスが登場したかどうかのフラグ
	float spawnTimer_;               // ボスが登場するまでの待機タイマー
	bool isFalling_;                 // ボスが降りているかどうかのフラグ
	float fallSpeed_;                // ボスが降りる速さ
	bool hitBox_ = true;             // ヒットボックスを描画するかどうかのフラグ
	int bossTexture;                 // ボスのスプライト
	std::vector<BossBullet> bullets; // ボスの弾丸
	std::vector<RotatingBullet> rotatingBullets; // 回転弾
	float attackTimer_;              // 攻撃のタイマー
	float attackInterval_;           // 攻撃の間隔

	void FireBullets(); // 弾丸を発射する関数
	void FireBulletSpiral(); // 回転弾を発射する関数
};