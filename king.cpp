#include "king.h"

King::King(eColor color) : Piece(color) {
}

Piece* King::makeKing(char c) {
  if(c == getChar(WHITE)) {
    return new King(WHITE);
  } else if(c == getChar(BLACK)) {
    return new King(BLACK);
  } else {
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
  return getChar(color);
}

char King::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'K';
    case BLACK:
      return 'k';
  }
}