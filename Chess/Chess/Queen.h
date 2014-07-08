#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"

class Queen : public Piece{
private:
public:
	Queen();
	Queen(int startingRow, int startingColumn, bool isWhite);
	char getType();
};

#endif // !Queen_H