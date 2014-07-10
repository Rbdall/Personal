#include <iostream>
#include <string>
#include <vector>
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
		bool validMove = false;
		std::vector<Move> moves;
		std::string inputStart;
		std::string inputEnd;
		Move move = Move(0, 0);
		Piece* selectedPiece;
		while (!checkMate){
			if (whiteTurn){
				gameBoard->printBoard();
				do{
					std::cout << "White's turn" << std::endl;
					std::cout << "Pick piece to move, format: row,col" << std::endl;
					std::cin >> inputStart;
					selectedPiece = gameBoard->getPiece(inputStart[0] - '0', inputStart[2] - '0');
					if (selectedPiece == NULL){
						std::cout << "No piece selected, try again" << std::endl;
						continue;
					}
					if (!selectedPiece->isWhite()){
						std::cout << "Selected black piece, try again" << std::endl;
						continue;
					}
					moves = selectedPiece->getPossibleMoves();
					if (moves.size() == 0){
						std::cout << "Selected piece has no possible moves, try again" << std::endl;
						continue;
					}
					gameBoard->printPossibleMoves(moves);
					std::cout << std::endl;
					break;
				} while(true);
				do{
					std::cout << "Pick position to move to, format: row,col" << std::endl;

					std::cin >> inputEnd;
					move = Move(inputEnd[0] - '0', inputEnd[2] - '0');
					for (size_t i = 0; i < moves.size(); i++){
						if (moves[i] == move){
							validMove = true;
							break;
						}
					}
				} while (!validMove);
				gameBoard->makeMove(gameBoard->getPiece(inputStart[0] - '0', inputStart[2] - '0'), move);
				whiteTurn = false;
			}
			else{
				gameBoard->printBoard();
				do{
					std::cout << "Black's turn" << std::endl;
					std::cout << "Pick piece to move, format: row,col" << std::endl;
					std::cin >> inputStart;
					selectedPiece = gameBoard->getPiece(inputStart[0] - '0', inputStart[2] - '0');
					if (selectedPiece == NULL){
						std::cout << "No piece selected, try again" << std::endl;
						continue;
					}
					if (selectedPiece->isWhite()){
						std::cout << "Selected white piece, try again" << std::endl;
						continue;
					}
					moves = selectedPiece->getPossibleMoves();
					if (moves.size() == 0){
						std::cout << "Selected piece has no possible moves, try again" << std::endl;
						continue;
					}
					gameBoard->printPossibleMoves(moves);
					std::cout << std::endl;
					break;
				} while (true);
				do{
					std::cout << "Pick position to move to, format: row,col" << std::endl;
					std::cin >> inputEnd;
					move = Move(inputEnd[0] - '0', inputEnd[2] - '0');
					for (size_t i = 0; i < moves.size(); i++){
						if (moves[i] == move){
							validMove = true;
							break;
						}
					}
				} while (!validMove);
				gameBoard->makeMove(gameBoard->getPiece(inputStart[0] - '0', inputStart[2] - '0'), move);
				whiteTurn = true;
			}
		}

	}
}