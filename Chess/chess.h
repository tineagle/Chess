#ifndef CHESS_H
#define CHESS_H

#include "board.h"

struct Chess {
  Board board;

  static Piece* makePiece(char c);
};


#endif