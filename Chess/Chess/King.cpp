#include "King.h"
King::King() :Piece(){}
King::King(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char King::getType(){
	return 'K';
}
std::vector<Move> King::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}