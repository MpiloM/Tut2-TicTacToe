/*
The TicTacToe Game Class Header
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{
private:
	char game[3][3];
	bool shift(int, int);

public:
	TicTacToe();
	void Instructions();
	void displayGame();
	void player1(int);
	void player2(int);
	bool Win();
	bool Draw();
	void RESET();
};

#endif