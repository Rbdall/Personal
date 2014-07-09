#include "Queen.h"
Queen::Queen() :Piece(){}
Queen::Queen(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Queen::getType(){
	return 'Q';
}
std::vector<Move> Queen::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}