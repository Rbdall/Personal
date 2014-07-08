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
	Piece* blackRook1 = new Rook(0, 0, false);
	Piece* blackKnight1 = new Knight(0, 1, false);
	Piece* blackBishop1 = new Bishop(0, 2, false);
	Piece* blackQueen = new Queen(0, 3, false);
	Piece* blackKing = new King(0, 4, false);
	Piece* blackBishop2 = new Bishop(0, 5, false);
	Piece* blackKnight2 = new Knight(0, 6, false);
	Piece* blackRook2 = new Rook(0, 7, false);

	pieces.push_back(blackRook1);
	pieces.push_back(blackKnight1);
	pieces.push_back(blackBishop1);
	pieces.push_back(blackKing);
	pieces.push_back(blackQueen);
	pieces.push_back(blackBishop2);
	pieces.push_back(blackKnight2);
	pieces.push_back(blackRook2);

	for (int i = 0; i < 8; i++){
		pieces.push_back(new Pawn(1, i, false));
	}

	Piece* whiteRook1 = new Rook(7, 0, true);
	Piece* whiteKnight1 = new Knight(7, 1, true);
	Piece* whiteBishop1 = new Bishop(7, 2, true);
	Piece* whiteKing = new King(7, 3, true);
	Piece* whiteQueen = new Queen(7, 4, true);
	Piece* whiteBishop2 = new Bishop(7, 5, true);
	Piece* whiteKnight2 = new Knight(7, 6, true);
	Piece* whiteRook2 = new Rook(7, 7, true);

	pieces.push_back(whiteRook1);
	pieces.push_back(whiteKnight1);
	pieces.push_back(whiteBishop1);
	pieces.push_back(whiteKing);
	pieces.push_back(whiteQueen);
	pieces.push_back(whiteBishop2);
	pieces.push_back(whiteKnight2);
	pieces.push_back(whiteRook2);

	for (int i = 0; i < 8; i++){
		pieces.push_back(new Pawn(6, i, true));
	}
}

void Board::printLocations(){
	for (size_t i = 0; i < pieces.size(); i++){
		std::cout << "Piece at (";
		std::cout << pieces[i]->getRow();
		std::cout << ",";
		std::cout << pieces[i]->getColumn();
		std::cout << ")" << std::endl;
	}
}

void Board::printBoard(){
	char printableBoard[8][8];
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			printableBoard[i][j] = 'X';
		}
	}
	for (size_t i = 0; i < pieces.size(); i++){
		printableBoard[pieces[i]->getRow()][pieces[i]->getColumn()] = pieces[i]->getType();
	}
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			std::cout << printableBoard[i][j];
		}
		std::cout << std::endl;
	}
}