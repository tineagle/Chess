#include "rook.h"

Rook::Rook(eColor color) : Piece(color) {
}

Piece* Rook::makePiece(char c) {
  if(c == getChar(WHITE)) {
    return new Rook(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Rook(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Rook::getMoves() {
  static auto moves = {
    Move("U...", Move::RULE_BOTH),
    Move("D...", Move::RULE_BOTH),
    Move("L...", Move::RULE_BOTH),
    Move("R...", Move::RULE_BOTH),
  };
  return moves;
}

char Rook::getChar() {
  return getChar(color);
}

char Rook::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'R';
    case BLACK:
      return 'r';
  }
}