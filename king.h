#ifndef CHESS_KING_H
#define CHESS_KING_H

#include "piece.h"

struct King final : public Piece {
  King(eColor color);
  static Piece* makeKing(char c);

  std::vector<Move> getMoves() override;
  char getChar() override;
};

#endif /* end of include guard: CHESS_KING_H */
