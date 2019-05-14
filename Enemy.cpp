#include "enemy.h"
#include "graphics.h"
#include "global.h"


Enemy::Enemy() {}

Enemy::Enemy(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/zombiewalkingBlue.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/zombiewalkingBlue.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Enemy::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Enemy::animationDone(std::string currentAnimation) {}




void Enemy::moveRight() {

	this->_dx = globals::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Enemy::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation(this->_facing == RIGHT ? "IdleRight" : "IdleLeft");
}




void Enemy::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Enemy::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}