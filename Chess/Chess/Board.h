#ifndef BOARD_H
#define BOARD_H
#include "Piece.h"
class Board{
	private:
		Piece board [8][8];
		bool checkMate;
	public:
		Board();
		Piece getPiece(int row, int column);

};

#endif // !BOARD_H
