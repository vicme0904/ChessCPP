#include "Piece.h"

Piece::Piece(Color pieceColor, char pieceSymbol)
	: color(pieceColor), symbol(pieceSymbol)
{
}

Color Piece::getColor() const
{
	return color;
}

char Piece::getSymbol() const
{
	return symbol;
}
