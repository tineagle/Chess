#include "pawn.h"

Pawn::Pawn(eColor color) : Piece(color) {
}

Piece* Pawn::makePiece(char c) {
  if(c == getChar(WHITE)) {
    return new Pawn(WHITE);
  } else if(c == getChar(BLACK)) {
    return new Pawn(BLACK);
  } else {
    return nullptr;
  }
}

std::vector<Move> Pawn::getMoves() {
  static auto whiteMoves = {
    Move("U", Move::RULE_EMPTY),
    Move("UL", Move::RULE_CAPTURE),
    Move("UR", Move::RULE_CAPTURE),
    // Move("UU", Move::RULE_EMPTY), // Double if not moved
    // Move("UL", Move::RULE_CAPTURE), // En passant
    // Move("UR", Move::RULE_CAPTURE), // En passant
  };
  static auto blackMoves = {
    Move("D", Move::RULE_EMPTY),
    Move("DL", Move::RULE_CAPTURE),
    Move("DR", Move::RULE_CAPTURE),
    // Move("DD", Move::RULE_EMPTY), // Double if not moved
    // Move("DL", Move::RULE_CAPTURE), // En passant
    // Move("DR", Move::RULE_CAPTURE), // En passant
  };

  switch(color) {
    case WHITE:
      return whiteMoves;
    case BLACK:
      return blackMoves;
  }
}

char Pawn::getChar() {
  return getChar(color);
}

char Pawn::getChar(eColor color) {
  switch(color) {
    case WHITE:
      return 'P';
    case BLACK:
      return 'p';
  }
}