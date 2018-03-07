#include "bishop.h"

Bishop::Bishop(eColor color) : Piece(color) {
}

Piece* Bishop::makeBishop(char c) {
  if(c == getChar(WHITE)) {
    return new Bishop(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Bishop(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Bishop::getMoves() {
  return {
    Move(UP 1, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(UP 1, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, LEFT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
    Move(DOWN 1, RIGHT 1, Move::MOVE_VECTOR, Move::RULE_BOTH),
  };
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