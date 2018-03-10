#include "knight.h"

Knight::Knight(eColor color) : Piece(color) {
}

Piece* Knight::makePiece(char c) {
  if(c == getChar(WHITE)) {
    return new Knight(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Knight(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Knight::getMoves() {
  static auto moves = {
    Move("UUL", Move::RULE_BOTH),
    Move("UUR", Move::RULE_BOTH),
    Move("DDL", Move::RULE_BOTH),
    Move("DDR", Move::RULE_BOTH),
    Move("LLU", Move::RULE_BOTH),
    Move("LLD", Move::RULE_BOTH),
    Move("RRU", Move::RULE_BOTH),
    Move("RRD", Move::RULE_BOTH),
  };
  return moves;
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