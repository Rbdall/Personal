#include "Bishop.h"
Bishop::Bishop() :Piece(){}
Bishop::Bishop(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char Bishop::getType(){
	return 'B';
}
std::vector<Move> Bishop::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}