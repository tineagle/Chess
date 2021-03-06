#include "king.h"

King::King(eColor color) : Piece(color) {
}

Piece* King::makePiece(char c) {
  if(c == getChar(WHITE)) {
    return new King(WHITE);
  } else if(c == getChar(BLACK)) {
    return new King(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> King::getMoves() {
  static auto moves = {
    Move("U", Move::RULE_BOTH),
    Move("D", Move::RULE_BOTH),
    Move("L", Move::RULE_BOTH),
    Move("R", Move::RULE_BOTH),
    Move("UL", Move::RULE_BOTH),
    Move("UR", Move::RULE_BOTH),
    Move("DL", Move::RULE_BOTH),
    Move("DR", Move::RULE_BOTH),
  };
  return moves;
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