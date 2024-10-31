#include "Player.h"
#include "Novice.h"

Player::Player(Vector2 pos, int radius, int speed) {
	pos_ = pos;
	radius_ = radius;
	speed_ = speed;
}

Player::~Player() {}

void Player::Update(char* keys, char* preKeys) {
	if (keys[DIK_W] && preKeys[DIK_W]) {
		pos_.y -= speed_;
	}

	if (keys[DIK_S] && preKeys[DIK_S]) {
		pos_.y += speed_;
	}

	if (keys[DIK_A] && preKeys[DIK_A]) {
		pos_.x -= speed_;
	}

	if (keys[DIK_D] && preKeys[DIK_D]) {
		pos_.x += speed_;
	}
}

void Player::Draw() { Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, GREEN, kFillModeSolid); }