#pragma once
enum class Color
{
	White,
	Black
};

class board;

class piece
{
protected:
	Color color;
	char symbol;

public:
	piece(Color pieceColor, char pieceSymbol);

	virtual ~piece() = default;

	Color getColor() const;

	char getSymbol() const;

	virtual bool isValidMove(
		int startRow,
		int startCol,
		int endRow,
		int endCol,
		board& Board) = 0;
};


