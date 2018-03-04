#include "piece.h"

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
