#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H

#include "piece.h"

struct Bishop final : public Piece {
  Bishop(eColor color);
  static Piece* makeBishop(char c);

  std::vector<Move> getMoves() override;
  char getChar() override;
  static char getChar(eColor color);
};

#endif /* end of include guard: CHESS_BISHOP_H */
