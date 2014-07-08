#include "Queen.h"
Queen::Queen() :Piece(){}
Queen::Queen(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char Queen::getType(){
	return 'Q';
}
std::vector<Move> Queen::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}