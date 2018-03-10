#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H

#include "piece.h"

struct Bishop final : public Piece {
  Bishop(eColor color);

  static Piece* makePiece(char c);
  static char getChar(eColor color);

  std::vector<Move> getMoves() override;
  char getChar() override;
};

#endif /* end of include guard: CHESS_BISHOP_H */
