#ifndef PIECE_H
#define PIECE_H
#include <vector>
class Board;
class Move{
	private:	
		int row;
		int column;
	public:
		Move(int newRow, int newColumn){
			row = newRow;
			column = newColumn;
		}
		int getRow(){
			return row;
		}
		int getColumn(){
			return column;
		}
};
class Piece{
	private:
		int row;
		int column;
		Board* localBoard;
		std::vector<Move> possibleMoves;
		bool whitePiece; 
	public:
		Piece();
		Piece(int startingRow, int startingColumn, bool isWhite, Board* myBoard);
		int getRow();
		int getColumn();
		void setRow(int newRow);
		void setColumn(int newColumn);
		bool isWhite();
		virtual char getType();

		virtual std::vector<Move> getPossibleMoves();
		void makeMove(Move endPosition);


};

#endif // !PIECE_H