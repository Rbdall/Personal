#include "Pawn.h"
#include "Board.h"
Pawn::Pawn() :Piece(){}
Pawn::Pawn(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){ }
char Pawn::getType(){
	return 'P';
}

std::vector<Move> Pawn::getPossibleMoves(){
	std::vector<Move> possible;
	if (isWhite()){
		if (getRow() == 6){
			if (getBoard()->board[getRow() - 2][getColumn()] == NULL){
				possible.push_back(Move(getRow() - 2, getColumn()));
			}

		}
		if (getRow() - 1 >= 0){
			if (getBoard()->board[getRow() - 1][getColumn()] == NULL){
				possible.push_back(Move(getRow() - 1, getColumn()));
			}
			if (getColumn() + 1 < 8){
				if (getBoard()->board[getRow() - 1][getColumn() + 1] != NULL && !(getBoard()->board[getRow() - 1][getColumn() + 1]->isWhite())){
					possible.push_back(Move(getRow() - 1, getColumn() + 1));
				}
			}
			if (getColumn() - 1 >= 0){
				if (getBoard()->board[getRow() - 1][getColumn() - 1] != NULL && !(getBoard()->board[getRow() - 1][getColumn() - 1]->isWhite())){
					possible.push_back(Move(getRow() - 1, getColumn() - 1));
				}
			}
			return possible;
		}
	}
	else{
		if (getRow() == 1){
			if (getBoard()->board[getRow() + 2][getColumn()] == NULL){
				possible.push_back(Move(getRow() + 2, getColumn()));
			}

		}
		if (getRow() + 1 < 8){
			if (getBoard()->board[getRow() + 1][getColumn()] == NULL){
				possible.push_back(Move(getRow() + 1, getColumn()));
			}
			if (getColumn() + 1 < 8){
				if (getBoard()->board[getRow() + 1][getColumn() + 1] != NULL && getBoard()->board[getRow() + 1][getColumn() + 1]->isWhite()){
					possible.push_back(Move(getRow() + 1, getColumn() + 1));
				}
			}
			if (getColumn() - 1 >= 0){
				if (getBoard()->board[getRow() + 1][getColumn() - 1] != NULL && getBoard()->board[getRow() + 1][getColumn() - 1]->isWhite()){
					possible.push_back(Move(getRow() + 1, getColumn() - 1));
				}
			}
			return possible;
		}
	}
	return possible;

}