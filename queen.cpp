#include "queen.h"

Queen::Queen(eColor color) : Piece(color) {
}

Piece* Queen::makeQueen(char c) {
  if(c == getChar(WHITE)) {
    return new Queen(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Queen(BLACK);
  } else {
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
  return getChar(color);
}

char Queen::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'Q';
    case BLACK:
      return 'q';
  }
}