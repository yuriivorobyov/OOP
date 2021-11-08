#include "Game.h"

Game::Game()
{
	begin = 0;
	end = 1;
	Game_Status = 2;
}
Game::Game(const Game& a)
{
	begin = a.begin;
	end = a.end;
	Game_Status = a.Game_Status;
}
Game::~Game() { }

bool Game::Init(int status)
{
	if (status == 1)
	{
		SetBegin(status);
		return true;
	}
	if (status == 0)
	{
		SetEnd(status);
		return true;
	}
	else
		return false;
}

istream& operator >> (istream& in, Game& g)
{
	g.SetBegin(0);
	g.SetEnd(1);
	do {
		cout << "[1]- Почати гру " << endl;
		cout << "[0] - Закінчити гру " << endl;
		cout << " Стан - ? "; in >> g.Game_Status;
		cout << endl;
	} while (!g.Init(g.Game_Status));
	return in;
}

ostream& operator << (ostream& out, const Game& a)
{
	out << string(a);
	return out;
}

Game::operator string() const
{
	stringstream s;

	if (begin == 1) { s << " Гра розпочалась - " << begin << endl; }
	if (end == 0) { s << " Гра закінчилась - " << end << endl; }

	return s.str();
}

Game& Game::operator = (Game& g)
{
	begin = g.begin;
	end = g.end;
	return g;
}
