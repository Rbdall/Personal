#include "Piece.h"
Piece::Piece(){
	row = -1;
	column = -1;
	whitePiece = true;
}
Piece::Piece(int startingRow, int startingColumn, bool isWhite, Board* myBoard){
	row = startingRow;
	column = startingColumn;
	whitePiece = isWhite;
	localBoard = myBoard;
}
int Piece::getRow(){
	return row;
}
int Piece::getColumn(){
	return column;
}
void Piece::setRow(int newRow){
	row = newRow;
}
void Piece::setColumn(int newColumn){
	column = newColumn;
}
bool Piece::isWhite(){
	return whitePiece;
}
char Piece::getType(){
	return 'N';
}
void Piece::makeMove(Move endPosition){
	setRow(endPosition.getRow());
	setColumn(endPosition.getColumn());
}
std::vector<Move> Piece::getPossibleMoves(){
	std::vector<Move> moves;
	return moves;
}