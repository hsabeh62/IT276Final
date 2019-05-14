#include <SDL.h>
#include<SDL_mixer.h>
#include "game.h"


int main(int argc, char* argv[])
{
	
	Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 640);
	Mix_Music *music = Mix_LoadMUS("Resources/TheWasteland.mp3");
	Mix_PlayMusic(music, -1);
	Game game;
	Mix_FreeMusic(music);
	return 0;

}