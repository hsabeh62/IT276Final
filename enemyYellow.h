#ifndef ENEMYYELLOW_H
#define ENEMYYELLOW_H


#include "global.h"
#include "animatedSprite.h"

class Graphics;
class EnemyYellow : public AnimatedSprite {

public:

	EnemyYellow();
	EnemyYellow(Graphics &graphics, float x, float y);
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