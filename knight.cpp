#include "knight.h"

Knight::Knight(eColor color) : Piece(color) {
}

Piece* Knight::makeKnight(char c) {
  switch (c) {
    case 'N':
      return new Knight(WHITE);
    case 'n':
      return new Knight(BLACK);
    default:
      return nullptr;
  }
}

std::vector<Move> Knight::getMoves() {
  return {
    Move(UP 2, LEFT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(UP 2, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 2, LEFT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 2, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(UP 1, LEFT 2, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 1, LEFT 2, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(UP 1, RIGHT 2, Move::MOVE_SINGLE, Move::RULE_BOTH),
    Move(DOWN 1, RIGHT 2, Move::MOVE_SINGLE, Move::RULE_BOTH),
  };
}

char Knight::getChar() {
  switch (color) {
    case WHITE:
      return 'N';
    case BLACK:
      return 'n';
  }
}
