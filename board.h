#pragma once
#include "Piece.h"
extern Piece board[8][8];
void initboard(Piece board[8][8]);
void boardprinter(Piece board[8][8]);
bool isinsideboard(int x, int y);
void piece_move(int x1, int y1, int x2, int y2, Piece board[8][8]);

