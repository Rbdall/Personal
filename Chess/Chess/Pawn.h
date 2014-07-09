#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"

class Pawn: public Piece{
private:
	bool homeRow;
public:
	Pawn();
	Pawn(int startingRow, int startingColumn, bool isWhite, Board* myBoard);
	char getType();
	std::vector<Move> getPossibleMoves();

};

#endif // !PAWN_H