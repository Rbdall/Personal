#include <iostream>
#include <string>
#include "Board.h"
#include "Piece.h"
#include "Test.h"
int main(){
	bool DEBUGGING = false;
	if (DEBUGGING){
		runTests();
	}
	else{
		Board* gameBoard = new Board();
		bool whiteTurn = true;
		bool checkMate = false;
		while (!checkMate){
			if (whiteTurn){
				gameBoard->printBoard();
				std::cout << "Pick piece to move, format: row,col" << std::endl;
				std::string inputStart;
				std::cin >> inputStart;
				std::cout << "Pick position to move to, format: row,col" << std::endl;
				std::string inputEnd;
				std::cin >> inputEnd;
				Move move(inputEnd[0] - '0', inputEnd[2] - '0');
				gameBoard->makeMove(gameBoard->getPiece(inputStart[0] - '0', inputStart[2] - '0'), move);
			}
			else{
				gameBoard->printBoard();
				std::cout << "Pick piece to move, format: row,col" << std::endl;
				std::string inputStart;
				std::cin >> inputStart;
				std::cout << "Pick position to move to, format: row,col" << std::endl;
				std::string inputEnd;
				std::cin >> inputEnd;
				Move move(inputEnd[0] - '0', inputEnd[2] - '0');
				gameBoard->makeMove(gameBoard->getPiece(inputStart[0] - '0', inputStart[2] - '0'), move);
			}
		}

	}
}