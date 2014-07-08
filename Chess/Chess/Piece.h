#ifndef PIECE_H
#define PIECE_H
#include <vector>
struct Move{
	int row;
	int col;
};
class Piece{
	private:
		int row;
		int column;
		std::vector<Move> possibleMoves;
		bool whitePiece; 
	public:
		Piece(int startingRow, int startingColumn, bool isWhite);
		int getRow();
		int getColumn();
		void setRow(int newRow);
		void setColumn(int newColumn);
		bool isWhite();
		std::vector<Move> getPossibleMoves;
		void setPossibleMoves();


};

#endif // !PIECE_H