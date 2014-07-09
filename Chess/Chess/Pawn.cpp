#include "Pawn.h"
#include "Board.h"
Pawn::Pawn() :Piece(){homeRow = true;}
Pawn::Pawn(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){ homeRow = true; }
char Pawn::getType(){
	return 'P';
}

std::vector<Move> Pawn::getPossibleMoves(){
	std::vector<Move> possible;
	if(homeRow){
		if (getBoard()->board[getRow() + 1][getColumn()] == NULL){
			possible.push_back(Move(getRow() + 1, getColumn()));
		}
		if (getBoard()->board[getRow() + 2][getColumn()] == NULL){
			possible.push_back(Move(getRow() + 2, getColumn()));
		}
		return possible;
	}
	else if(getRow() + 1 < 8){
		if (getBoard()->board[getRow() + 1][getColumn()] == NULL){
			possible.push_back(Move(getRow() + 1, getColumn()));
		}
		return possible;
	}
	else{
		return possible;
	}
	
}