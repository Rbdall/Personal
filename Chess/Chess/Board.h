#ifndef BOARD_H
#define BOARD_H
#include "Piece.h"
#include <vector>
class Board{
	private:
	public:
		Piece* board[8][8];
		Board();
		Piece* getPiece(int row, int column);
		void movePiece();
		void printLocations();
		void printBoard();
		bool makeMove(Piece* piece, Move move);
		void printPossibleMoves(std::vector<Move> moves);
};

#endif // !BOARD_H
