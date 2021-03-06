#pragma once
#include "GameObject.h"

class Enemy : public GameObject
{
public:

	float delay, rof, trailDelay, trailRate;

	Enemy(float x, float y) : GameObject(x, y, 35), delay(0), rof(1.2f), trailDelay(0), trailRate(.2f)
	{
		sprite = spriteEnemy;
		color = WHITE;
		speed = 65;
		vel.y = -speed;
	}

	void onCollision(GameObject &o);

	void onUpdate();
};