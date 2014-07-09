#include "Bishop.h"
Bishop::Bishop() :Piece(){}
Bishop::Bishop(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Bishop::getType(){
	return 'B';
}
std::vector<Move> Bishop::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}