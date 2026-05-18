#include "Pawn.h"

Pawn::Pawn(Color pieceColor)
	: Piece(pieceColor,
		pieceColor == Color::White ? 'P' : 'p')
{
}

bool Pawn::isValidMove(
	int startRow,
	int startCol,
	int endRow,
	int endCol,
	Board& board)

{
	return false;
}