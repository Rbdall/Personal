#include "Knight.h"
Knight::Knight() :Piece(){}
Knight::Knight(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char Knight::getType(){
	return 'H';
}