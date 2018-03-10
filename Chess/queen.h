#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H

#include "piece.h"

struct Queen final : public Piece {
  Queen(eColor color);
  static Piece* makePiece(char c);

  std::vector<Move> getMoves() override;
  char getChar() override;
  static char getChar(eColor color);
};

#endif /* end of include guard: CHESS_QUEEN */
