#ifndef ENEMY_H
#define ENEMY_H


#include "global.h"
#include "animatedSprite.h"

class Graphics;
class Enemy : public AnimatedSprite {

public:

	Enemy();
	Enemy(Graphics &graphics, float x, float y);
	void draw(Graphics &graphics);
	void update(float elapsedTime);


	

	void moveRight();

	void stopMoving();

	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();

private:

	float _dx, _dy;

	Direction _facing;


};



#endif