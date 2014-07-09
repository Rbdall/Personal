#ifndef BOARD_H
#define BOARD_H
#include "Piece.h"
#include <vector>
class Board{
	private:
		//std::vector<Piece*> pieces;
		Piece* board[8][8];
		bool checkMate;
	public:
		Board();
		Piece* getPiece(int row, int column);
		void movePiece();
		void printLocations();
		void printBoard();

};

#endif // !BOARD_H
