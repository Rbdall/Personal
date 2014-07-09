#include "King.h"
King::King() :Piece(){}
King::King(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char King::getType(){
	return 'K';
}
std::vector<Move> King::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}