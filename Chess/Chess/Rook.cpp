#include "Rook.h"
Rook::Rook() :Piece(){}
Rook::Rook(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Rook::getType(){
	return 'R';
}
std::vector<Move> Rook::getPossibleMoves(){
	std::vector<Move> possible;
	for(int i = getRow() - 1; i >= 0; i--){
		possible.push_back(Move(i, getColumn()));
	}
	for(int i = getRow() + 1; i < 8; i++){
		possible.push_back(Move(i, getColumn()));
	}
	for (int i = getColumn() - 1; i >= 0; i--){
		possible.push_back(Move(getRow(), i));
	}
	for (int i = getColumn() + 1; i < 8; i++){
		possible.push_back(Move(getRow(), i));
	}
	return possible;
}