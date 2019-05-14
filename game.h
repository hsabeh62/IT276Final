#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "enemy.h"
#include "enemyred.h"
#include "enemyYellow.h"
#include "enemyPurple.h"
#include "Turrents.h"
#include "level.h"
class Graphics;


class Game {
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);
	Player _player;
	Enemyred _enemy3;
	EnemyYellow _enemy4;
	EnemyYellow _enemy7;
	EnemyYellow _enemy8;
	EnemyYellow _enemy9;
	EnemyYellow _enemy10;
	Enemy _enemy2;
	Enemygreen _enemy6;
	EnemyPurple _enemy5;
	Level _level;
	Turrentpurple _purple;
	Turrentred _red;
	Turrentyellow _yellow;
	Turrentgreen _green;
	Turrentblue _blue;
};



#endif 