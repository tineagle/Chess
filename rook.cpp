#include "rook.h"

Rook::Rook(eColor color) : Piece(color) {
}

Piece* Rook::makeRook(char c) {
  if(c == getChar(WHITE)) {
    return new Rook(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Rook(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Rook::getMoves() {
  return {
    Move(UP 1, 0, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, 0, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(0, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(0, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
  };
}

char Rook::getChar() {
  return getChar(color);
}

char Rook::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'B';
    case BLACK:
      return 'b';
  }
}