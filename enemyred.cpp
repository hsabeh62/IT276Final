#include "enemyred.h"
#include "graphics.h"

namespace enemyred_constants {


	const float WALK_SPEED = 0.2f;
}
Enemyred::Enemyred() {}

Enemyred::Enemyred(Graphics &graphics, float x, float y) :

	AnimatedSprite(graphics, "Resources/sprites/zombieRed.png", 0, 0, 16, 16, x, y, 100)
{
	graphics.loadImage("Resources/sprites/zombieRed.png");
	this->setupAnimations();
	this->playAnimation("RunRight");

}


void Enemyred::setupAnimations() {

	this->addAnimation(3, 0, 0, "RunRight", 16, 16, Vector2(0, 0));
	this->addAnimation(1, 0, 16, "IdleRight", 16, 16, Vector2(0, 0));

}

void Enemyred::animationDone(std::string currentAnimation) {}




void Enemyred::moveRight() {

	this->_dx = enemyred_constants::WALK_SPEED;
	this->playAnimation("RunRight");
	this->_facing = RIGHT;
}

void Enemyred::stopMoving() {
	this->_dx = 0.0f;
	this->playAnimation(this->_facing == RIGHT ? "IdleRight" : "IdleLeft");
}




void Enemyred::update(float elapsedTime) {

	this->_x += this->_dx * elapsedTime;
	AnimatedSprite::update(elapsedTime);

}


void Enemyred::draw(Graphics &graphics) {

	AnimatedSprite::draw(graphics, this->_x, this->_y);
}