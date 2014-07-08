#include "Knight.h"
Knight::Knight() :Piece(){}
Knight::Knight(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char Knight::getType(){
	return 'H';
}
std::vector<Move> Knight::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}