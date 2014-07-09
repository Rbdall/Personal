#include "Board.h"
#include "Piece.h"
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"
#include <iostream>
Board::Board(){
	//Set up the black side of the board
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			board[i][j] = NULL;
		}
	}
	board[0][0] = new Rook(0, 0, false, this);
	board[0][1] = new Knight(0, 1, false, this);
	board[0][2] = new Bishop(0, 2, false, this);
	board[0][3] = new Queen(0, 3, false, this);
	board[0][4] = new King(0, 4, false, this);
	board[0][5] = new Bishop(0, 5, false, this);
	board[0][6] = new Knight(0, 6, false, this);
	board[0][7] = new Rook(0, 7, false, this);
	for (int i = 0; i < 8; i++){
		board[1][i] = new Pawn(1, i, false, this);
	}

	board[7][0] = new Rook(7, 0, true, this);
	board[7][1] = new Knight(7, 1, true, this);
	board[7][2] = new Bishop(7, 2, true, this);
	board[7][3] = new King(7, 3, true, this);
	board[7][4] = new Queen(7, 4, true, this);
	board[7][5] = new Bishop(7, 5, true, this);
	board[7][6] = new Knight(7, 6, true, this);
	board[7][7] = new Rook(7, 7, true, this);
	for (int i = 0; i < 8; i++){
		board[6][i] = new Pawn(6, i, true, this);
	}
}

void Board::printLocations(){
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if (board[i][j] != NULL){
				std::cout << "Piece at (" << i << "," << j << ")" << std::endl;
			}
		}
	}
}

void Board::printBoard(){
	char printableBoard[8][8];
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			printableBoard[i][j] = 'X';
		}
	}
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if (board[i][j] != NULL){
				printableBoard[i][j] = board[i][j]->getType();
			}
		}
	}
	for (int i = 0; i < 8; i++){
		std::cout << i;
	}
	std::cout << std::endl;
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			std::cout << printableBoard[i][j];
		}
		std::cout << i;
		std::cout << std::endl;
	}
}

Piece* Board::getPiece(int row, int column){
	if (row < 0 || row > 7){
		return NULL;
	}
	if (column < 0 || column > 7){
		return NULL;
	}
	return board[row][column];
}

bool Board::makeMove(Piece* piece, Move move){
	if (move.getRow() < 0 || move.getRow() > 7){
		return false;
	}
	if (move.getColumn() < 0 || move.getColumn() > 7){
		return false;
	}
	board[piece->getRow()][piece->getColumn()] = NULL;
	piece->makeMove(move);
	board[move.getRow()][move.getColumn()] = piece;
	return true;
}