#include "piece.h"

piece::piece(Color pieceColor, char pieceSymbol)
	: color(pieceColor), symbol(pieceSymbol)
{
}

Color piece::getColor() const
{
	return color;
}

char piece::getSymbol() const
{
	return symbol;
}
