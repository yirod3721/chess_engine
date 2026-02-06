#pragma once
#include "Piece.h"
bool valid_knight_move(int x1, int y1, int x2, int y2);
bool valid_rook_move(int x1, int y1, int x2, int y2);
bool valid_bishop_move(int x1, int y1, int x2, int y2);
bool valid_queen_move(int x1, int y1, int x2, int y2);
bool valid_king_move(int x1, int y1, int x2, int y2);
bool valid_pawn_move(int x1, int y1, int x2, int y2);
