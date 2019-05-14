#include "input.h"

//input class keeps track of keyboard state



//this function is called at beginning of each fram to reset keys no longer relevant
void Input::beginNewFrame() {

	this->_pressedKeys.clear();
	this->_releasedKeys.clear();



}
//this gets called when a key is pressed
void Input::keyDownEvent(const SDL_Event& event) {
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;


}
//this gets called when a key is released
void Input::keyUpEvent(const SDL_Event&event) {

	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode]=false;
}

//checks if a certain key was pressed during frame
bool Input::wasKeyPressed(SDL_Scancode key) {

	return this->_pressedKeys[key];
}
//check if certain key was released during frame
bool Input::wasKeyReleased(SDL_Scancode key) {
	return this->_releasedKeys[key];
}
//check if a certain key is being held
bool Input::isKeyHeld(SDL_Scancode key) {
	return this->_heldKeys[key];
}