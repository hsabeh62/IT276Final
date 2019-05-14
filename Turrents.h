#ifndef TURRENTS_H
#define TURRENTS_H


#include "global.h"
#include "animatedSprite.h"

class Graphics;
class Turrentgreen : public AnimatedSprite {

public:

	Turrentgreen();
	Turrentgreen(Graphics &graphics, float x, float y);
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

class Turrentblue : public AnimatedSprite {

public:

	Turrentblue();
	Turrentblue(Graphics &graphics, float x, float y);
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

class Turrentred : public AnimatedSprite {

public:

	Turrentred();
	Turrentred(Graphics &graphics, float x, float y);
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

class Turrentyellow : public AnimatedSprite {

public:

	Turrentyellow();
	Turrentyellow(Graphics &graphics, float x, float y);
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
class Turrentpurple : public AnimatedSprite {

public:

	Turrentpurple();
	Turrentpurple(Graphics &graphics, float x, float y);
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