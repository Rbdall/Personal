#include <iostream>
#include "Board.h"
#include "Piece.h"
int main(){
	Board* gameBoard = new Board();
	//gameBoard->printLocations();
	gameBoard->printBoard();
	system("cls");
	Move move(3,3);
	(gameBoard->getPiece(0, 0))->makeMove(move);
	gameBoard->printBoard();
}