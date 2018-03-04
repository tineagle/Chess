#include "pawn.h"

Pawn::Pawn(eColor color) : Piece(color) {
}

Piece* Pawn::makePawn(char c) {
  switch (c) {
    case 'P':
      return new Pawn(WHITE);
    case 'p':
      return new Pawn(BLACK);
    default:
      return nullptr;
  }
}

std::vector<Move> Pawn::getMoves() {
  switch(color) {
    case WHITE:
      return {
        Move(UP 1, 0, Move::MOVE_SINGLE, Move::RULE_EMPTY),
        Move(UP 1, LEFT 1, Move::MOVE_SINGLE, Move::RULE_CAPTURE),
        Move(UP 1, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_CAPTURE),
        // Move(UP 2, Left 1, Move::SINGLE, Move::RULE_CAPTURE),
        // Move(Up 2, Right 1, Move::SINGLE, Move::RULE_CAPTURE),
      };
    case BLACK:
      return {
        Move(DOWN 1, 0, Move::MOVE_SINGLE, Move::RULE_EMPTY),
        Move(DOWN 1, LEFT 1, Move::MOVE_SINGLE, Move::RULE_CAPTURE),
        Move(DOWN 1, RIGHT 1, Move::MOVE_SINGLE, Move::RULE_CAPTURE),
        // Move(DOWN 2, LEFT 1, Move::MOVE_SINGLE, Move::RULE_CAPTURE),
        // Move(DOWN 2, RIGHT 1, Move::SINGLE, Move::RULE_CAPTURE),
      };
  }
}

char Pawn::getChar() {
  switch (color) {
    case WHITE:
      return 'P';
    case BLACK:
      return 'p';
  }
}
