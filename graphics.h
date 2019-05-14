#ifndef GRAPHICS_H
#define GRAPHICS_H

//holds all information for game graphics

#include<SDL.h>
#include <SDL_mixer.h>
#include<map>
#include<string>


struct SDL_Window;
struct SDL_Renderer;

class Graphics {


private:

	static Graphics* _Instance;
	

public:

	Graphics();
	~Graphics();

	//loads image into spritesheets map if it doesn't exist yet, this is so each image is ony loaded once

	SDL_Surface* loadImage(const std::string &filePath);


	// draws texture to certain part of screen

	void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);

	//renders everything to screen

	void flip();

	//clears screen

	void clear();

	//returns renderer
	SDL_Renderer* getRenderer() const;
	Graphics* Instance();
	
	Mix_Music * getMusic(std::string & filePath);

	
	Mix_Chunk* GetSFX(const std::string filename);

private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;

	std::map<std::string, SDL_Surface*> _spriteSheets;
	std::map<std::string, Mix_Music*> _Music;
	std::map<std::string, Mix_Chunk*> _SFX;
};


#endif

