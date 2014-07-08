#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"

class Rook : public Piece{
private:
public:
	Rook();
	Rook(int startingRow, int startingColumn, bool isWhite);
	char getType();
};

#endif // !ROOK_H