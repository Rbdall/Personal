#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"

class Bishop : public Piece{
private:
public:
	Bishop();
	Bishop(int startingRow, int startingColumn, bool isWhite, Board* myBoard);
	char getType();
	std::vector<Move> getPossibleMoves();
};

#endif // !BISHOP_H