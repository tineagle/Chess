#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "piece.h"

struct Knight final : public Piece {
  Knight(eColor color);
  static Piece* makeKnight(char c);

  std::vector<Move> getMoves() override;
  char getChar() override;
  static char getChar(eColor color);
};

#endif /* end of include guard: CHESS_KNIGHT_H */
