#include "Piece.h"
Piece::Piece(int startingRow, int startingColumn, bool isWhite){
	row = startingRow;
	column = startingColumn;
	whitePiece = isWhite;
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
	return whitePiece
}