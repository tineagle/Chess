#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H

#include "piece.h"

struct Pawn final : public Piece {
  Pawn(eColor color);
  static Piece* makePawn(char c);

  std::vector<Move> getMoves() override;
  char getChar() override;
  static char getChar(eColor color);
};

#endif /* end of include guard: CHESS_PAWN_H */
