#include "piece.h"

Move::Move(std::string moveString, eMoveRule moveRule) 
    : dRow(0), dColumn(0), moveStyle(MOVE_SINGLE), moveRule(moveRule) {
  for (char c : moveString) {
    if (c == '.') {
      moveStyle = MOVE_VECTOR;
    } else if (c == 'U') {
      dRow++;
    } else if (c == 'D') {
      dRow--;
    } else if (c == 'L') {
      dColumn--;
    } else if (c == 'R') {
      dColumn++;
    } else {
      // Pass
    }
  }
}

Move::Move(int dRow, int dColumn, eMoveStyle moveStyle, eMoveRule moveRule)
    : dRow(dRow), dColumn(dColumn), moveStyle(moveStyle), moveRule(moveRule) {
}

Piece::Piece(eColor color)
    : color(color) {
}

Piece::~Piece() {
}

bool Piece::isFriend(Piece *rhs) {
    return this->color == rhs->color;
}

bool Piece::isEnemy(Piece *rhs) {
    return this->color != rhs->color;
}
