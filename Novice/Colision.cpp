#include "Colision.h"
#include<stdio.h>
#include <math.h>
class Player;
class Bullet;
class Boss;
class BossBullet;
class RotatingBullet;
class Enemy;


void Colision::Init() { 
	 

}



Colision::Colision() { 

	//CheckColision(player->GetX(), player->GetY(),player->GetRadius(),enemy->GetX(),enemy->GetY(),enemy->GetRadius() );

}
//プレイヤーのディスタンスを求めるために
bool Colision::CheckColision(float x1, float y1, float r1, float x2, float y2, float r2) { 
	//中心点間の距離の二乗を計算
	float dx = x2 - x1;
	float dy = y2 - y1;
	float distance = sqrtf(dx * dx * dy * dy);
	//半径の合計の二乗を計算
	float radiusRoot = r1 + r2;
	float radiusRootSum = radiusRoot + radiusRoot;

return distance <= radiusRootSum;

}

void Colision::PlayerToEnemyUpdate() 
{
	if (CheckColision(player->GetX(), player->GetY(), player->GetRadius(), enemy->GetX(),enemy->GetY(),enemy->GetRadius())) 
	{
	//プレイヤーと敵が衝突したら
		printf("判定している");

	}
}
void Colision::PlayerBulletToEnemyUpdate() {
	if (CheckColision(bullet->GetX(),bullet->GetY(),bullet->GetRadius(),enemy->GetX(),enemy->GetY(),enemy->GetRadius()))
	{
	//プレイヤーの玉に敵が衝突したら


	}

}

void Colision::PlayerToBossUpdate() 
{ 
	if (CheckColision(player->GetX(), player->GetY(), player->GetRadius(), boss->GetX(),boss->GetY(),boss->GetRadius()))
	{
		//プレイヤーとボスが衝突したら



	}

}

void Colision::PlayerToBossBulletUpdate() 
{
	if (CheckColision(player->GetX(), player->GetY(), player->GetRadius(), bossbullet->GetX(), bossbullet->GetY(), bossbullet->GetRadius())) 
	{
	//プレイヤーにボスの玉が当たったら



	}
}

void Colision::PlayerToRotatingBullet()
{
	if (CheckColision(player->GetX(), player->GetY(), player->GetRadius(), rotatingbullet->GetX(), rotatingbullet->GetY(), rotatingbullet->GetRadius())) 
	{
	//プレイヤーにボスの回転する玉が当たったら



	}
}





