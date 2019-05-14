#ifndef ENEMYPURPLE_H
#define ENEMYPURPLE_H


#include "global.h"
#include "animatedSprite.h"

class Graphics;
class EnemyPurple : public AnimatedSprite {

public:

	EnemyPurple();
	EnemyPurple(Graphics &graphics, float x, float y);
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

class Enemygreen : public AnimatedSprite {

public:

	Enemygreen();
	Enemygreen(Graphics &graphics, float x, float y);
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