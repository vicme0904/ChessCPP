#pragma once
#include "piece.h"

class board
{
private:
	piece* grid[8][8];

public:
	board();
	
	void Initialize();
	void printBoard();

	piece* getPiece(int row, int col);

	bool movePiece(
		int startRow, 
		int startCol,
		int endRow,
		int endCol);

	bool isInsideBoard(int row, int col);
};
