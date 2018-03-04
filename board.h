#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "piece.h"

#include <array>

struct Board {
    std::array<std::array<Piece*, 8>, 8> pieces;

    Board(std::array<std::array<Piece*, 8>, 8> pieces);
    ~Board();

    Piece* getPiece(size_t row, size_t column);
    void setPiece(size_t row, size_t column, Piece *piece);

    void print();

};

#endif /* end of include guard: CHESS_BOARD_H */
