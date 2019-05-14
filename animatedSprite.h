#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H
#include "sprite.h"
#include <map>
#include <string>
#include <vector>
#include "global.h"

class Graphics;

class AnimatedSprite : public Sprite {

public:

	AnimatedSprite();
	AnimatedSprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate);


	//plays animation if not playing already
	void playAnimation(std::string animation, bool once = false);

	//updates sprite animation
	void update(int elapsedTime);
	//draws animations
	void draw(Graphics &graphics, int x, int y);

	

protected:

	double _timeToUpdate;
	bool _currentAnimationOnce;
	std::string _currentAnimation;

	//adds aniamtion to map of animations
	void addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset);

	//resets all animations for this sprite
	void resetAnimations();

	// stops currentanimation
	void stopAnimation();
	//changed visibility of current sprite
	void setVisible(bool visible);

	virtual void animationDone(std::string currentAnimation) = 0;

	//sets up all animations for sprites
	virtual void setupAnimations() = 0;


private:

	std::map < std::string, std::vector<SDL_Rect> > _animations;
	std::map < std::string, Vector2> _offsets;

	int _frameIndex;
	double _timeElapsed;
	bool _visible;

};

#endif