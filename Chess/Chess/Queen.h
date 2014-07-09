#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"

class Queen : public Piece{
private:
public:
	Queen();
	Queen(int startingRow, int startingColumn, bool isWhite, Board* myBoard);
	char getType();
	std::vector<Move> getPossibleMoves();
};

#endif // !Queen_H