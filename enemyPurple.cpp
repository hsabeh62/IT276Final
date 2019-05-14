#include "enemyPurple.h"
#include "graphics.h"
#include "global.h"


EnemyPurple::EnemyPurple() {}

EnemyPurple::EnemyPurple(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/zombiePurple.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/zombiePurple.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void EnemyPurple::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void EnemyPurple::animationDone(std::string currentAnimation) {}




void EnemyPurple::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void EnemyPurple::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation(this->_facing == RIGHT ? "IdleRight" : "IdleLeft");
}




void EnemyPurple::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void EnemyPurple::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}



Enemygreen::Enemygreen() {}

Enemygreen::Enemygreen(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/zombiewalking.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/zombiewalking.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Enemygreen::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Enemygreen::animationDone(std::string currentAnimation) {}




void Enemygreen::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Enemygreen::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation(this->_facing == RIGHT ? "IdleRight" : "IdleLeft");
}




void Enemygreen::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Enemygreen::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}