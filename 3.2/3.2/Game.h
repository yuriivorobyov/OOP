#pragma once
#include <iostream>
#include <sstream>


using namespace std;

class Game
{
private:
	int begin, end;
	int Game_Status;
public:
	Game();
	Game(const Game&);
	~Game();

	int GetBegin() const { return begin; }
	int GetEnd() const { return end; }
	int GetStatus() const { return Game_Status; }

	void SetBegin(int begin) { this->begin = begin; }
	void SetEnd(int end) { this->end = end; }
	void SetStatus(int Game_Status) { this->Game_Status = Game_Status; }

	bool Init(int status);
	friend istream& operator >> (istream&, Game&);
	friend ostream& operator << (ostream&, const Game&);
	operator string() const;
	Game& operator = (Game&);
};

