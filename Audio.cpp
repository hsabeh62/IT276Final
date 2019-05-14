#include "Audio.h"
//#include "graphics.h"

Audio* Audio::_instance = NULL;

Audio* Audio::Instance() {

	if (_instance == NULL)
		_instance = new Audio();

	return _instance;
}

void Audio::Release() {

	delete _instance;
	_instance = NULL;
}

Audio::Audio() {
	
	_assetMgr = _assetMgr->Instance();
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 4096) < 0) {

		printf("Mixer Initialization Error: %s\n", Mix_GetError());
	}
}

Audio::~Audio() {

	_assetMgr = NULL;
	Mix_Quit();

}

void Audio::PlayMusic(std::string filePath, int loops) {

	Mix_PlayMusic(_assetMgr->getMusic(filePath), loops);
}

void Audio::PauseMusic() {

	if (Mix_PlayingMusic() != 0)
		Mix_PauseMusic();
}

void Audio::ResumeMusic() {

	if (Mix_PausedMusic() != 0)
		Mix_ResumeMusic();
}

void Audio::PlaySFX(std::string filePath, int loops, int channel) {

	Mix_PlayChannel(channel, _assetMgr->GetSFX(filePath), loops);
}