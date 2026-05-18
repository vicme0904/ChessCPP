#include "Board.h"
#include <iostream>
#include "Pawn.h"

using namespace std;

Board::Board()
{
	for(int row = 0; row < 8; ++row)
	{
		for(int col = 0; col < 8; ++col)
		{
			grid[row][col] = nullptr;
		}
	}
}

void Board::Initialize()
{
	for(int col = 0; col < 8; ++col)
	{
		grid[1][col] = new Pawn(Color::Black);
		grid[6][col] = new Pawn(Color::White);
	}
}

bool Board::isInsideBoard(int row, int col)
{
	return row >= 0 && row < 8 && 
			col >= 0 && col < 8;
}

Piece* Board::getPiece(int row, int col)
{
	return grid[row][col];
}

void Board::printBoard()
{
	cout << "\n";

	for(int row = 0; row < 8; ++row)
	{
		cout << 8 - row << " ";

		for(int col = 0; col < 8; ++col)
		{
			if(grid[row][col] != nullptr)
			{
				cout << grid[row][col]->getSymbol() << " ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

	cout << "  a b c d e f g h\n";
}

bool Board::movePiece(
	int startRow,
	int startCol,
	int endRow,
	int endCol)
{
	return false;
}