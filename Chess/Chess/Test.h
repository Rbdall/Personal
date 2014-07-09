#include <assert.h>
#include "Board.h"
#include <iostream>

void testBoard(){ //Tests functionality of board.cpp

	std::cout << std::endl << "Beginning board tests..." << std::endl;

	std::cout << '\t' << "Testing board constructor..." << std::endl;
	Board* testBoard = new Board();

	assert(testBoard->board[0][0] != NULL);
	assert(testBoard->board[0][1] != NULL);
	assert(testBoard->board[0][2] != NULL);
	assert(testBoard->board[0][3] != NULL);
	assert(testBoard->board[0][4] != NULL);
	assert(testBoard->board[0][5] != NULL);
	assert(testBoard->board[0][6] != NULL);
	assert(testBoard->board[0][7] != NULL);
	std::cout << '\t' << '\t' << "First row correct" << std::endl;

	assert(testBoard->board[1][0] != NULL);
	assert(testBoard->board[1][1] != NULL);
	assert(testBoard->board[1][2] != NULL);
	assert(testBoard->board[1][3] != NULL);
	assert(testBoard->board[1][4] != NULL);
	assert(testBoard->board[1][5] != NULL);
	assert(testBoard->board[1][6] != NULL);
	assert(testBoard->board[1][7] != NULL);
	std::cout << '\t' << '\t' << "Second row correct" << std::endl;

	assert(testBoard->board[2][0] == NULL);
	assert(testBoard->board[2][1] == NULL);
	assert(testBoard->board[2][2] == NULL);
	assert(testBoard->board[2][3] == NULL);
	assert(testBoard->board[2][4] == NULL);
	assert(testBoard->board[2][5] == NULL);
	assert(testBoard->board[2][6] == NULL);
	assert(testBoard->board[2][7] == NULL);
	std::cout << '\t' << '\t' << "Third row correct" << std::endl;

	assert(testBoard->board[3][0] == NULL);
	assert(testBoard->board[3][1] == NULL);
	assert(testBoard->board[3][2] == NULL);
	assert(testBoard->board[3][3] == NULL);
	assert(testBoard->board[3][4] == NULL);
	assert(testBoard->board[3][5] == NULL);
	assert(testBoard->board[3][6] == NULL);
	assert(testBoard->board[3][7] == NULL);
	std::cout << '\t' << '\t' << "Fourth row correct" << std::endl;

	assert(testBoard->board[4][0] == NULL);
	assert(testBoard->board[4][1] == NULL);
	assert(testBoard->board[4][2] == NULL);
	assert(testBoard->board[4][3] == NULL);
	assert(testBoard->board[4][4] == NULL);
	assert(testBoard->board[4][5] == NULL);
	assert(testBoard->board[4][6] == NULL);
	assert(testBoard->board[4][7] == NULL);
	std::cout << '\t' << '\t' << "Fifth row correct" << std::endl;

	assert(testBoard->board[5][0] == NULL);
	assert(testBoard->board[5][1] == NULL);
	assert(testBoard->board[5][2] == NULL);
	assert(testBoard->board[5][3] == NULL);
	assert(testBoard->board[5][4] == NULL);
	assert(testBoard->board[5][5] == NULL);
	assert(testBoard->board[5][6] == NULL);
	assert(testBoard->board[5][7] == NULL);
	std::cout << '\t' << '\t' << "Sixth row correct" << std::endl;

	assert(testBoard->board[6][0] != NULL);
	assert(testBoard->board[6][1] != NULL);
	assert(testBoard->board[6][2] != NULL);
	assert(testBoard->board[6][3] != NULL);
	assert(testBoard->board[6][4] != NULL);
	assert(testBoard->board[6][5] != NULL);
	assert(testBoard->board[6][6] != NULL);
	assert(testBoard->board[6][7] != NULL);
	std::cout << '\t' << '\t' << "Seventh row correct" << std::endl;

	assert(testBoard->board[7][0] != NULL);
	assert(testBoard->board[7][1] != NULL);
	assert(testBoard->board[7][2] != NULL);
	assert(testBoard->board[7][3] != NULL);
	assert(testBoard->board[7][4] != NULL);
	assert(testBoard->board[7][5] != NULL);
	assert(testBoard->board[7][6] != NULL);
	assert(testBoard->board[7][7] != NULL);
	std::cout << '\t' << '\t' << "Eighth row correct" << std::endl;
	std::cout << '\t' << "Board constructor is working!" << std::endl ;

	std::cout << '\t' << "Testing getPiece()..." << std::endl;
	assert(testBoard->getPiece(0, 0) != NULL);
	assert(testBoard->getPiece(0, 7) != NULL);
	assert(testBoard->getPiece(1, 0) != NULL);
	assert(testBoard->getPiece(1, 7) != NULL);
	std::cout << '\t' << '\t' << "Get valid pieces correct" << std::endl;

	assert(testBoard->getPiece(2, 0) == NULL);
	assert(testBoard->getPiece(2, 7) == NULL);
	assert(testBoard->getPiece(5, 0) == NULL);
	assert(testBoard->getPiece(5, 7) == NULL);
	std::cout << '\t' << '\t' << "Get null spaces correct" << std::endl;

	assert(testBoard->getPiece(-1, 0) == NULL);
	assert(testBoard->getPiece(8, 0) == NULL);
	assert(testBoard->getPiece(0, -1) == NULL);
	assert(testBoard->getPiece(0, 8) == NULL);
	std::cout << '\t' << '\t' << "Outside array bounds correct" << std::endl;
	std::cout << '\t' << "getPiece() is working!" << std::endl;

	std::cout << "Board tests complete!" << std::endl << std::endl;
	delete testBoard;
}

void runTests(){
	std::cout << "==== Beginning test suite ====" << std::endl;
	testBoard();
	std::cout << "==== All tests passed ====" << std::endl;
}