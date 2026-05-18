#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(Color pieceColor);
	
	bool isValidMove(
		int startRow,
		int startCol,
		int endRow,
		int endCol,
		Board& board) override;
};