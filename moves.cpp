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

