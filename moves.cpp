#include "moves.h"
int knight_vector[8][2] = {
	{1,2}, {-1, 2}, {-2 , 1}, {-2, -1}, {1, -2}, {-1, -2}, {2, 1}, {2, -1}
};
bool valid_knight_move(int x1, int y1, int x2, int y2){
	if (x2 < 0 || x2 > 7 || y2 < 0 || y2 > 7){
		return false;
	}


	int dx = x2 - x1;
	int dy = y2 - y1;
	for(int i = 0; i<=7; i++){
		if (dx == knight_vector[i][0] && dy == knight_vector[i][1]){
			return true;
		}
	}
	return false;
}

bool valid_pawn_move(int x1, int y1, int x2, int y2, Piece board[8][8]){
	// white pawn rules(no queening)
	if ((board[y1][x1].color == Color::white) && (board[y1][x1].type == PieceType::pawn)){
		if ((x2 == x1) && (y2 == (y1+1)) && (board[y2][x2].type == PieceType::none)){
			return true;

		}
		if ((x2 == x1) && (y2 == (y1+2)) && (board[y2][x2].type == PieceType::none) && (y1 == 1)){
			return true;

		}
		if ((x2 == (x1 + 1)) && (y2 == (y1 + 1)) && (board[y2][x2].type != PieceType::none) && (board[y2][x2].color == Color::black))
		{
			return true;
		}

		if ((x2 == (x1 - 1)) && (y2 == (y1 + 1)) && (board[y2][x2].type != PieceType::none) && (board[y2][x2].color == Color::black)){
			return true;
		}

		
	}
	//black pawn rules
	if ((board[y1][x1].color == Color::black) && (board[y1][x1].type == PieceType::pawn)){
		if ((x2 == x1) && (y2 == (y1-1)) && (board[y2][x2].type == PieceType::none)){
			return true;

		}
		if ((x2 == x1) && (y2 == (y1-2)) && (board[y2][x2].type == PieceType::none) && (y1 == 6)){
			return true;

		}
		if ((x2 == (x1 + 1)) && (y2 == (y1 - 1)) && (board[y2][x2].type != PieceType::none) && (board[y2][x2].color == Color::white))
		{
			return true;
		}
		if ((x2 == (x1 - 1)) && (y2 == (y1 - 1)) && (board[y2][x2].type != PieceType::none) && (board[y2][x2].color == Color::white)){
			return true;
		}

		



	}


}
