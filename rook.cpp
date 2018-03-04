#include "rook.h"

Rook::Rook(eColor color) : Piece(color) {
}

Piece* Rook::makeRook(char c) {
  switch (c) {
    case 'R':
      return new Rook(WHITE);
    case 'r':
      return new Rook(BLACK);
    default:
      return nullptr;
  }
}

std::vector<Move> Rook::getMoves() {
  return {
    Move(UP 1, 0, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, 0, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(0, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(0, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
  };
}

char Rook::getChar() {
  switch (color) {
    case WHITE:
      return 'R';
    case BLACK:
      return 'r';
  }
}
