#include "enemyYellow.h"
#include "graphics.h"
#include "global.h"


EnemyYellow::EnemyYellow() {}

EnemyYellow::EnemyYellow(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/zombieYellow.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/zombieYellow.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void EnemyYellow::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void EnemyYellow::animationDone(std::string currentAnimation) {}




void EnemyYellow::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void EnemyYellow::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation(this->_facing == RIGHT ? "IdleRight" : "IdleLeft");
}




void EnemyYellow::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void EnemyYellow::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}