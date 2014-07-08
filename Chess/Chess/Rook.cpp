#include "Rook.h"
Rook::Rook() :Piece(){}
Rook::Rook(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char Rook::getType(){
	return 'R';
}
std::vector<Move> Rook::getPossibleMoves(){
	std::vector<Move> possible;
	return possible;
}