#include "Enemy.h"
#include <Novice.h>
#include<time.h>

Enemy::Enemy(Vector2 pos, int s, int r, int isAlive) {
	pos_ = pos;
	radius_ = r;
	speed_ = s;
	isAlive_ = isAlive;
	enemyTex = Novice::LoadTexture("./Resources/enemy/enemy.png");
	minX = 615;
	maxX = 1365;
	randPosX_ = 0;

}

void Enemy::Update() {

	pos_.x += speed_;

	if (pos_.x - radius_ <= 50 || pos_.x + radius_ >= 980) {
		speed_ *= -1;
	}

}

void Enemy::Draw() { Novice::DrawSprite(randPosX_, (int)pos_.y, enemyTex, 1.0f, 1.0f, 3.2f, WHITE); }

void Enemy::Position() {
	srand((unsigned int)time(NULL));
	randPosX_ = rand() % (maxX - minX) + minX;

	// pos_.x = randPosX_;
}

float Enemy::GetX() { return pos_.x; }

float Enemy::GetY() { return pos_.y; }

float Enemy::GetRadius() { return (float)radius_; }
