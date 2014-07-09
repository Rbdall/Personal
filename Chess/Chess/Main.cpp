#include <iostream>
#include "Board.h"
#include "Piece.h"
int main(){
	Board* gameBoard = new Board();
	//gameBoard->printLocations();
	gameBoard->printBoard();
	//system("cls");
	//Move move(3,3);
	//(gameBoard->getPiece(0, 0))->makeMove(move);
	//Piece* test = gameBoard->getPiece(0, 7);
	//if (test != NULL){
	//	std::vector<Move> test2 = test->getPossibleMoves();
	//	for (size_t i = 0; i < test2.size(); i++){
	//	std::cout << test2[i].getRow();
	//	std::cout << " ";
	//	std::cout << test2[i].getColumn() << std::endl;
	//	}
	//}
	//gameBoard->printBoard();
}