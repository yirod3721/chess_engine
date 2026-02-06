#pragma once
#include <iostream>
#include <array>
using namespace std;
enum class PieceType {none, pawn, rook, knight, bishop, queen, king};
enum class Color {white, black};
struct Piece{
	PieceType type = PieceType::none;
	Color color = Color::white;
};
