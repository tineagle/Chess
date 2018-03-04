#include "king.h"

King::King(eColor color) : Piece(color) {
}

Piece* King::makeKing(char c) {
  switch (c) {
    case 'K':
      return new King(WHITE);
    case 'k':
      return new King(BLACK);
    default:
      return nullptr;
  }
}

std::vector<Move> King::getMoves() {
  return {
    Move(UP 1, 0, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 1, 0, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(0, LEFT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(0, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(UP 1, LEFT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(UP 1, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 1, LEFT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 1, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
  };
}

char King::getChar() {
  switch (color) {
    case WHITE:
      return 'K';
    case BLACK:
      return 'k';
  }
}
