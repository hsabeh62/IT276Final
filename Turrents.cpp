#include "Turrents.h"
#include "graphics.h"
#include "global.h"


Turrentpurple::Turrentpurple() {}

Turrentpurple::Turrentpurple(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/purpleCanon.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/purpleCanon.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Turrentpurple::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Turrentpurple::animationDone(std::string currentAnimation) {}




void Turrentpurple::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Turrentpurple::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation("RunRight");
}




void Turrentpurple::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Turrentpurple::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}



Turrentgreen::Turrentgreen() {}

Turrentgreen::Turrentgreen(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/greenCanon.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/greenCanon.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Turrentgreen::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Turrentgreen::animationDone(std::string currentAnimation) {}




void Turrentgreen::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Turrentgreen::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation("RunRight");
}




void Turrentgreen::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Turrentgreen::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}

Turrentblue::Turrentblue() {}

Turrentblue::Turrentblue(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/blueCanon.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/blueCanon.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Turrentblue::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Turrentblue::animationDone(std::string currentAnimation) {}




void Turrentblue::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Turrentblue::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation("RunRight");
}




void Turrentblue::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Turrentblue::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}



Turrentred::Turrentred() {}

Turrentred::Turrentred(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/redCanon.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/redCanon.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Turrentred::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Turrentred::animationDone(std::string currentAnimation) {}




void Turrentred::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Turrentred::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation("RunRight");
}




void Turrentred::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Turrentred::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}

Turrentyellow::Turrentyellow() {}

Turrentyellow::Turrentyellow(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/yellowCanon.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/yellowCanon.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Turrentyellow::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Turrentyellow::animationDone(std::string currentAnimation) {}




void Turrentyellow::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Turrentyellow::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation("RunRight");
}




void Turrentyellow::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Turrentyellow::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}