#ifndef BOARD_H
#define BOARD_H
#include "Piece.h"
#include <vector>
class Board{
	private:
		bool checkMate;
	public:
		Piece* board[8][8];
		Board();
		Piece* getPiece(int row, int column);
		void movePiece();
		void printLocations();
		void printBoard();
		void makeMove(int startingRow, int startingColumn, Move move);
};

#endif // !BOARD_H
