#include "Bishop.h"
#include "Board.h"
Bishop::Bishop() :Piece(){}
Bishop::Bishop(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Bishop::getType(){
	return 'B';
}
std::vector<Move> Bishop::getPossibleMoves(){
	std::vector<Move> possible;
	
	for (int i = getRow() + 1, j = getColumn() + 1; i < 8 && j < 8; i++, j++){
		if (getBoard()->board[i][j] == NULL){
			possible.push_back(Move(i, j));
		}
		else if (getBoard()->board[i][j]->isWhite() != isWhite()){
			possible.push_back(Move(i, j));
			break;
		}
		else{
			break;
		}
	}
	for (int i = getRow() + 1, j = getColumn() - 1; i < 8 && j >= 0; i++, j--){
		if (getBoard()->board[i][j] == NULL){
			possible.push_back(Move(i, j));
		}
		else if (getBoard()->board[i][j]->isWhite() != isWhite()){
			possible.push_back(Move(i, j));
			break;
		}
		else{
			break;
		}
	}
	for (int i = getRow() - 1, j = getColumn() + 1; i >= 0 && j < 8; i--, j++){
		if (getBoard()->board[i][j] == NULL){
			possible.push_back(Move(i, j));
		}
		else if (getBoard()->board[i][j]->isWhite() != isWhite()){
			possible.push_back(Move(i, j));
			break;
		}
		else{
			break;
		}
	}
	for (int i = getRow() - 1, j = getColumn() - 1; i >= 0 && j >= 0; i--, j--){
		if (getBoard()->board[i][j] == NULL){
			possible.push_back(Move(i, j));
		}
		else if (getBoard()->board[i][j]->isWhite() != isWhite()){
			possible.push_back(Move(i, j));
			break;
		}
		else{
			break;
		}
	}
	return possible;
}