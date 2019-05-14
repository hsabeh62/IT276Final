#ifndef AUDIO_H
#define AUDIO_H

#include "graphics.h"


class Audio {

private:

	static Audio* _instance;

	 Graphics* _assetMgr;
	 //Graphics* _assetMgr;
public:
	static Audio * Instance();
	//static Audio* Instance();
	static void Release();
	void PlayMusic(std::string filePath, int loops = -1);
	void PauseMusic();
	void ResumeMusic();

	void PlaySFX(std::string filePath, int loops = 0, int channel = 0);
private:
	Audio();
	~Audio();


};
#endif