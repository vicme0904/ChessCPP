#include "game.h"

Game::Game()
{
	chessBoard.Initialize();
}

void Game::run()
{
	chessBoard.printBoard();
}