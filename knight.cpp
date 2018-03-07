#include "knight.h"

Knight::Knight(eColor color) : Piece(color) {
}

Piece* Knight::makeKnight(char c) {
  if(c == getChar(WHITE)) {
    return new Knight(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Knight(BLACK);
  } else {
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
  return getChar(color);
}

char Knight::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'N';
    case BLACK:
      return 'n';
  }
}