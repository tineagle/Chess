#include "board.h"

#include <iostream>

Board::Board(std::array<std::array<Piece*, 8>, 8> pieces)
    : pieces(pieces) {
}

Board::~Board() {
    for(auto column : pieces) {
        for(auto piece : column) {
            if(piece != nullptr) {
                delete piece;
            }
        }
    }
}

Piece* Board::getPiece(size_t row, size_t column) {
    return pieces[row][column];
}

void Board::setPiece(size_t row, size_t column, Piece* piece) {
    pieces[row][column] = piece;
}

void Board::print() {
  // Reverse rows for printing so that white is printed on bottom
  for(auto row = pieces.rbegin(); row != pieces.rend(); ++row) {
    for(auto piece : *row) {
      if(piece) {
        std::cout << piece->getChar();
      } else {
        std::cout << '.';
      }
    }
    std::cout << std::endl;
  }
    // for(size_t row = 0; row < 8; ++row) {
    //     for(size_t column = 0; column < 8; ++column) {
    //         Piece *piece = getPiece(row, column);
    //         std::cout << (piece == nullptr ? '.' : piece->getChar());
    //     }
    //     std::cout << std::endl;
    //   }
}
