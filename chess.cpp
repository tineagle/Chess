#include "piece.h"
#include "pawn.h"
#include "bishop.h"
#include "rook.h"
#include "knight.h"
#include "king.h"
#include "queen.h"
#include "board.h"

#include <iostream>
#include <algorithm>

Piece* getPiece(char c) {
  auto factories = {
    Pawn::makePawn,
    Bishop::makeBishop,
    Rook::makeRook,
    Knight::makeKnight,
    King::makeKing,
    Queen::makeQueen,
  };

  Piece *piece = nullptr;
  for(auto factory : factories) {
    piece = factory(c);
    if(piece)
      break;
  }
  return piece;
}

Board makeBoard() {
  std::array<std::array<char, 8>, 8> css = {{
    {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}},
    {{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}}, // Black
    {{'.', '.', '.', '.', '.', '.', '.', '.'}},
    {{'.', '.', '.', '.', '.', '.', '.', '.'}},
    {{'.', '.', '.', '.', '.', '.', '.', '.'}},
    {{'.', '.', '.', '.', '.', '.', '.', '.'}},
    {{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}}, // White
    {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}}
  }};

  std::array<std::array<Piece*, 8>, 8> pss;
  // Reverse rows so that white is indexed at 0/1
  std::transform(css.rbegin(), css.rend(), pss.begin(),
    [](std::array<char, 8> cs) -> std::array<Piece*, 8> {
      std::array<Piece*, 8> ps;
      std::transform(cs.begin(), cs.end(), ps.begin(), getPiece);
      return ps;
  });
  return pss;
}

int main() {
    Board board = makeBoard();
    board.print();
    return 0;
}
