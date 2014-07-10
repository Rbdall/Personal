#include "Queen.h"
#include "Board.h"
Queen::Queen() :Piece(){}
Queen::Queen(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Queen::getType(){
	return 'Q';
}
std::vector<Move> Queen::getPossibleMoves(){
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

	for (int i = getRow() - 1; i >= 0; i--){
		if (getBoard()->board[i][getColumn()] == NULL){
			possible.push_back(Move(i, getColumn()));
		}
		else if (getBoard()->board[i][getColumn()]->isWhite() != isWhite()){
			possible.push_back(Move(i, getColumn()));
			break;
		}
		else{
			break;
		}
	}
	for (int i = getRow() + 1; i < 8; i++){
		if (getBoard()->board[i][getColumn()] == NULL){
			possible.push_back(Move(i, getColumn()));
		}
		else if (getBoard()->board[i][getColumn()]->isWhite() != isWhite()){
			possible.push_back(Move(i, getColumn()));
			break;
		}
		else{
			break;
		}
	}
	for (int i = getColumn() - 1; i >= 0; i--){
		if (getBoard()->board[getRow()][i] == NULL){
			possible.push_back(Move(getRow(), i));
		}
		else if (getBoard()->board[getRow()][i]->isWhite() != isWhite()){
			possible.push_back(Move(getRow(), i));
			break;
		}
		else{
			break;
		}

	}
	for (int i = getColumn() + 1; i < 8; i++){
		if (getBoard()->board[getRow()][i] == NULL){
			possible.push_back(Move(getRow(), i));
		}
		else if (getBoard()->board[getRow()][i]->isWhite() != isWhite()){
			possible.push_back(Move(getRow(), i));
			break;
		}
		else{
			break;
		}
	}
	return possible;
}