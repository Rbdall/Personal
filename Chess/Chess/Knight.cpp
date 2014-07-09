#include "Knight.h"
#include "Board.h"
Knight::Knight() :Piece(){}
Knight::Knight(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Knight::getType(){
	return 'H';
}
std::vector<Move> Knight::getPossibleMoves(){
	std::vector<Move> possible;
	if (getRow() - 2 >= 0 &&
		  getColumn() - 1 >= 0 &&
		  (getBoard()->board[getRow() - 2][getColumn() - 1] == NULL || 
		  getBoard()->board[getRow() - 2][getColumn() - 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() - 2, getColumn() - 1));

	}
	if (getRow() - 2 >= 0 &&
		getColumn() + 1 < 8 &&
		(getBoard()->board[getRow() - 2][getColumn() + 1] == NULL ||
		getBoard()->board[getRow() - 2][getColumn() + 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() - 2, getColumn() + 1));

	}
	if (getRow() + 2 < 8 &&
		getColumn() - 1 >= 0 &&
		(getBoard()->board[getRow() + 2][getColumn() - 1] == NULL ||
		getBoard()->board[getRow() + 2][getColumn() - 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() + 2, getColumn() - 1));

	}
	if (getRow() + 2 < 8 &&
		getColumn() + 1 < 8 &&
		(getBoard()->board[getRow() + 2][getColumn() + 1] == NULL ||
		getBoard()->board[getRow() + 2][getColumn() + 1]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() + 2, getColumn() + 1));

	}
	if (getRow() - 1 >= 0 &&
		getColumn() + 2 < 8 &&
		(getBoard()->board[getRow() - 1][getColumn() + 2] == NULL ||
		getBoard()->board[getRow() - 1][getColumn() + 2]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() - 1, getColumn() + 2));

	}
	if (getRow() + 1 < 8  &&
		getColumn() + 2 < 8 &&
		(getBoard()->board[getRow() + 1][getColumn() + 2] == NULL ||
		getBoard()->board[getRow() + 1][getColumn() + 2]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() + 1, getColumn() + 2));

	}
	if (getRow() - 1 >= 0 &&
		getColumn() - 2 >= 0 &&
		(getBoard()->board[getRow() - 1][getColumn() - 2] == NULL ||
		getBoard()->board[getRow() - 1][getColumn() - 2]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() - 1, getColumn() - 2));

	}
	if (getRow() + 1 < 8  &&
		getColumn() + 2 < 8 &&
		(getBoard()->board[getRow() + 1][getColumn() + 2] == NULL ||
		getBoard()->board[getRow() + 1][getColumn() + 2]->isWhite() != isWhite())){

		possible.push_back(Move(getRow() + 1, getColumn() + 2));

	}
	return possible;
}