#pragma once
#include "Game.h"
class Football : public Game
{

public:
	Football();
	Football(int, int);
	Football(const Football&);
	~Football();

};

