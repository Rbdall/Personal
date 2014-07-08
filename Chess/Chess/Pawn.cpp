#include "Pawn.h"
Pawn::Pawn():Piece(){}
Pawn::Pawn(int startingRow, int startingColumn, bool isWhite) : Piece(startingRow, startingColumn, isWhite){}
char Pawn::getType(){
	return 'P';
}