#pragma once
#include"Vector2.h"
#include"Player.h"
#include"Bullet.h"
#include"Boss.h"
#include"BossBullet.h"
#include"RotatingBullet.h"
#include"GamePlayScene.h"
class Colision {
public:
	void Init();
	//コンストラクターで何の判定を取るのか引数に渡す
	Colision();
	//void Init();
	virtual bool CheckColision(float x1,float y1,float r1,float x2,float y2,float r2);
	void PlayerBulletToEnemyUpdate();
	void PlayerToEnemyUpdate();
	void PlayerToBossUpdate();
	void PlayerToBossBulletUpdate();
	void PlayerToRotatingBullet();

private:
	Player* player;
	Bullet* bullet;
	Enemy* enemy;
	Boss* boss;
	BossBullet* bossbullet;
	RotatingBullet* rotatingbullet;

	Vector2 hitC;
	float r_;
	bool Checkfrag_;

};
//
