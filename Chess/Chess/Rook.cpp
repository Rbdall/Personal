#include "Rook.h"
#include "Board.h"
Rook::Rook() :Piece(){}
Rook::Rook(int startingRow, int startingColumn, bool isWhite, Board* myBoard) : Piece(startingRow, startingColumn, isWhite, myBoard){}
char Rook::getType(){
	return 'R';
}
std::vector<Move> Rook::getPossibleMoves(){
	std::vector<Move> possible;
	for(int i = getRow() - 1; i >= 0; i--){
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
	for(int i = getRow() + 1; i < 8; i++){
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