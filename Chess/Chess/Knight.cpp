#include "Knight.h"
Knight::Knight() :Piece(){}
Knight::Knight(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Knight::getType(){
	return 'H';
}
std::vector<Move> Knight::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}