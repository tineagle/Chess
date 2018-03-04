#include "bishop.h"

Bishop::Bishop(eColor color) : Piece(color) {
}

Piece* Bishop::makeBishop(char c) {
  switch (c) {
    case 'B':
      return new Bishop(WHITE);
    case 'b':
      return new Bishop(BLACK);
    default:
      return nullptr;
  }
}

std::vector<Move> Bishop::getMoves() {
  return {
    Move(UP 1, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(UP 1, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
  };
}

char Bishop::getChar() {
  switch (color) {
    case WHITE:
      return 'B';
    case BLACK:
      return 'b';
  }
}
