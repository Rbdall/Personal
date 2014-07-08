#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"

class Bishop : public Piece{
private:
public:
	Bishop();
	Bishop(int startingRow, int startingColumn, bool isWhite);
	char getType();
};

#endif // !BISHOP_H