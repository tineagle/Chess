#include "bishop.h"

Bishop::Bishop(eColor color) : Piece(color) {
}

Piece* Bishop::makePiece(char c) {
  if(c == getChar(WHITE)){
    return new Bishop(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Bishop(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Bishop::getMoves() {
  static auto moves = {
    Move("UL...", Move::RULE_BOTH),
    Move("UR...", Move::RULE_BOTH),
    Move("DL...", Move::RULE_BOTH),
    Move("DR...", Move::RULE_BOTH),
  };
  return moves;
}

char Bishop::getChar() {
  return getChar(color);
}

char Bishop::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'B';
    case BLACK:
      return 'b';
  }
}