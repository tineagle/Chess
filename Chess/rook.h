#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H

#include "piece.h"

struct Rook final : public Piece {
  Rook(eColor color);
  static Piece* makePiece(char c);

  std::vector<Move> getMoves() override;
  char getChar() override;
  static char getChar(eColor color);
};

#endif /* end of include guard: CHESS_ROOK_H */
