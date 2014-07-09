#include "King.h"
#include "Board.h"
King::King() :Piece(){}
King::King(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char King::getType(){
	return 'K';
}
std::vector<Move> King::getPossibleMoves(){
	std::vector<Move> possible;
	if (getRow() + 1 < 8 &&
		getColumn() + 1 < 8 &&
		(getBoard()->board[getRow() + 1][getColumn() + 1] == NULL || 
		getBoard()->board[getRow() + 1][getColumn() + 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() + 1, getColumn() + 1));

	}
	if (getRow() + 1 < 8 &&
		getColumn() - 1 >= 0 &&
		(getBoard()->board[getRow() + 1][getColumn() - 1] == NULL ||
		getBoard()->board[getRow() + 1][getColumn() - 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() + 1, getColumn() - 1));

	}
	if (getRow() - 1 >= 0 &&
		getColumn() + 1 < 8 &&
		(getBoard()->board[getRow() - 1][getColumn() + 1] == NULL ||
		getBoard()->board[getRow() - 1][getColumn() + 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() - 1, getColumn() + 1));

	}
	if (getRow() - 1 >= 0 &&
		getColumn() - 1 >= 0 &&
		(getBoard()->board[getRow() - 1][getColumn() - 1] == NULL ||
		getBoard()->board[getRow() - 1][getColumn() - 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() - 1, getColumn() - 1));

	}
	return possible;
}