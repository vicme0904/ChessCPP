#include "board.h"
#include <iostream>

using namespace std;

board::board()
{
	for(int row = 0; row < 8; ++row)
	{
		for(int col = 0; col < 8; ++col)
		{
			grid[row][col] = nullptr;
		}
	}
}

bool board::isInsideBoard(int row, int col)
{
	return row >= 0 && row < 8 && 
			col >= 0 && col < 8;
}

piece* board::getPiece(int row, int col)
{
	return grid[row][col];
}

void board::printBoard()
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
				cout << ". ";
			}
		}
		cout << "\n";
	}

	cout 
}