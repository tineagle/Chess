#include "queen.h"

Queen::Queen(eColor color) : Piece(color) {
}

Piece* Queen::makeQueen(char c) {
  switch (c) {
    case 'Q':
      return new Queen(WHITE);
    case 'q':
      return new Queen(BLACK);
    default:
      return nullptr;
  }
}

std::vector<Move> Queen::getMoves() {
  return {
    Move(UP 1, 0, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, 0, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(0, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(0, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(UP 1, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(UP 1, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
  };
}

char Queen::getChar() {
  switch (color) {
    case WHITE:
      return 'Q';
    case BLACK:
      return 'q';
  }
}
