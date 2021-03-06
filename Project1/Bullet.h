#pragma once
#include "GameObject.h"

class Bullet : public GameObject
{
public:
	float lifespan;

	Bullet(float x, float y, float a_speed) : GameObject(x, y, 12), lifespan(3.f)
	{
		sprite = spriteBullet;
		speed = a_speed;
		color = WHITE;
		vel.y = speed;
	}

	void onUpdate()
	{
		lifespan -= sfw::getDeltaTime();
		if (lifespan < 0)
		{
			active = false;
		}
	}
};