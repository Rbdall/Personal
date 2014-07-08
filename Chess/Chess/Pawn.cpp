#include "Pawn.h"
Pawn::Pawn() :Piece(){homeRow = true;}
Pawn::Pawn(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){homeRow = true;}
char Pawn::getType(){
	return 'P';
}

std::vector<Move> Pawn::getPossibleMoves(){
	std::vector<Move> possible;
	if(homeRow){
		possible.push_back(Move(getRow() + 1, getColumn()));
		possible.push_back(Move(getRow() + 2, getColumn()));
		return possible;
	}
	else{
		possible.push_back(Move(getRow() + 1, getColumn()));
		return possible;
	}
	
}