#pragma once
#include "piece.h"

class Board
{
private:
	Piece* grid[8][8];

public:
	Board();
	
	void Initialize();
	void printBoard();

	Piece* getPiece(int row, int col);

	bool movePiece(
		int startRow, 
		int startCol,
		int endRow,
		int endCol);

	bool isInsideBoard(int row, int col);
};
