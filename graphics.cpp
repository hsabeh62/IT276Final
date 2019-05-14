
#include<SDL.h>
#include<SDL_image.h>


#include "graphics.h"
#include "global.h"

//this class holds all graphics information
Graphics::Graphics() {

	SDL_CreateWindowAndRenderer(globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, 0, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this ->_window, "FinalGame");
}

Graphics::~Graphics() {

	SDL_DestroyWindow(this->_window);

}

SDL_Surface* Graphics::loadImage(const std::string &filePath) {

	if (this->_spriteSheets.count(filePath) == 0) {
		this->_spriteSheets[filePath] = IMG_Load(filePath.c_str());

	}

		return this->_spriteSheets[filePath];
}

void Graphics::blitSurface(SDL_Texture* texture, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle) {
	SDL_RenderCopy(this->_renderer, texture, sourceRectangle, destinationRectangle);
}

void Graphics::flip() {

	SDL_RenderPresent(this->_renderer);

}

void Graphics::clear() {

	SDL_RenderClear(this->_renderer);
}

SDL_Renderer* Graphics::getRenderer() const {
	return this->_renderer;

}



Graphics* Graphics::_Instance = NULL;

Graphics* Graphics::Instance() {

	if (_Instance == NULL)
		_Instance = new Graphics();

	return _Instance;
}


Mix_Music* Graphics::getMusic(std::string &filePath) {

	std::string fullPath = SDL_GetBasePath();

	fullPath.append("Resources/" + filePath);

	if (_Music[fullPath] == nullptr) {

		_Music[fullPath] = Mix_LoadMUS(fullPath.c_str());
		if (_Music[fullPath] == NULL)
			printf("Music loading error; File-%s error-%s", filePath.c_str(), Mix_GetError);
	}
	return _Music[fullPath];
}

Mix_Chunk* Graphics::GetSFX(std::string filePath) {

	std::string fullPath = SDL_GetBasePath();

	fullPath.append("Resources/" + filePath);

	if (_SFX[fullPath] == nullptr) {
		_SFX[fullPath] = Mix_LoadWAV(fullPath.c_str());

		if (_SFX[fullPath] == NULL)
			printf("SFX Loading Error: File-%s Error-%s", filePath.c_str(), Mix_GetError());

	}

	return _SFX[fullPath];
}