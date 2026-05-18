#pragma once
enum class Color
{
	White,
	Black
};

class Board;

class Piece
{
protected:
	Color color;
	char symbol;

public:
	Piece(Color pieceColor, char pieceSymbol);

	virtual ~Piece() = default;

	Color getColor() const;

	char getSymbol() const;

	virtual bool isValidMove(
		int startRow,
		int startCol,
		int endRow,
		int endCol,
		Board& Board) = 0;
};


