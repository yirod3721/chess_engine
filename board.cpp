
#include <iostream>
#include <array>
using namespace std;
char piecechar(PieceType type){
	switch(type){
		case(PieceType::none): return '.';
		case(PieceType::pawn): return 'P';
		case(PieceType::rook): return 'R';
		case(PieceType::knight): return 'N';
		case(PieceType::bishop): return 'B';
		case(PieceType::queen):  return 'Q';
		case(PieceType::king): return 'K';
	return '.';

	}
};
Piece board[8][8];

void initboard(Piece board[8][8]){
	//board clearer
	for(int y = 7; y >= 0; y--){
		for(int x = 0; x <= 7; x++){
			board[y][x].type = PieceType::none;
		}
	}
	//pawn maker
	for (int x=0; x <= 7; x++){
		board[1][x].type = PieceType::pawn;
		board[1][x].color = Color::white;

	}
	for (int x=0; x <= 7; x++){
		board[6][x].type = PieceType::pawn;
		board[6][x].color = Color::black;

	}
	//rook maker
	board[7][0].type = PieceType::rook;
	board[7][0].color = Color::black;
	board[7][7].type = PieceType::rook;
	board[7][7].color = Color::black;
	//white
	board[0][0].type = PieceType::rook;
	board[0][0].color = Color::white;
	board[0][7].type = PieceType::rook;
	board[0][7].color = Color::white;
	//knight
	board[7][1].type = PieceType::knight;
	board[7][1].color = Color::black;
	board[7][6].type = PieceType::knight;
	board[7][6].color = Color::black;
	//white
	board[0][1].type = PieceType::knight;
	board[0][1].color = Color::white;
	board[0][6].type = PieceType::knight;
	board[0][6].color = Color::white;
	//bishop
	board[7][2].type = PieceType::bishop;
	board[7][2].color = Color::black;
	board[7][5].type = PieceType::bishop;
	board[7][5].color = Color::black;
	//white
	board[0][2].type = PieceType::bishop;
	board[0][2].color = Color::white;
	board[0][5].type = PieceType::bishop;
	board[0][5].color = Color::white;
	//queens
	board[7][3].type = PieceType::queen;
	board[7][3].color = Color::black;
	//white
	board[0][3].type = PieceType::queen;
	board[0][3].color = Color::white;
	//kings
	board[7][4].type = PieceType::king;
	board[7][4].color = Color::black;
	//white
	board[0][4].type = PieceType::king;
	board[0][4].color = Color::white;

}
void boardprinter(Piece board[8][8]){
	for (int y = 7; y >= 0; y--){
		for (int x = 0; x <= 7; x++){
			cout << piecechar(board[y][x].type) << " ";
		}
		cout << endl;
	}
}
void piece_move(int x1, int y1, int x2, int y2, Piece board[8][8]){
	//movement
	board[y2][x2].type = board[y1][x1].type;
	board[y2][x2].color = Color::white;
	//clearing old square
	board[y1][x1].type = PieceType::none;



}
bool valid_knight_move(int x1, int y1, int x2, int y2){
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
int main()
{
initboard(board);
boardprinter(board);
piece_move(4, 1, 4, 2, board);
boardprinter(board);
}
