#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"

class Pawn: public Piece{
private:
public:
	Pawn();
	Pawn(int startingRow, int startingColumn, bool isWhite);
	char getType();
	

};

#endif // !PAWN_H