#include "queen.h"

Queen::Queen(eColor color) : Piece(color) {
}

Piece* Queen::makePiece(char c) {
  if(c == getChar(WHITE)) {
    return new Queen(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Queen(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Queen::getMoves() {
  static auto moves = {
    Move("U...", Move::RULE_BOTH),
    Move("D...", Move::RULE_BOTH),
    Move("L...", Move::RULE_BOTH),
    Move("R...", Move::RULE_BOTH),
    Move("UL...", Move::RULE_BOTH),
    Move("UR...", Move::RULE_BOTH),
    Move("DL...", Move::RULE_BOTH),
    Move("DR...", Move::RULE_BOTH),
  };
  return moves;
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