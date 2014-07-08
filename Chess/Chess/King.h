#ifndef King_H
#define King_H
#include "Piece.h"

class King : public Piece{
private:
public:
	King();
	King(int startingRow, int startingColumn, bool isWhite);
	char getType();
	std::vector<Move> getPossibleMoves();
};

#endif // !King_H