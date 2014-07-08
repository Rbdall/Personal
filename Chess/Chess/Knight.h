#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"

class Knight : public Piece{
private:
public:
	Knight();
	Knight(int startingRow, int startingColumn, bool isWhite);
	char getType();
	std::vector<Move> getPossibleMoves();
};

#endif // !KNIGHT_H