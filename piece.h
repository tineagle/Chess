#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <vector>

#define UP +
#define DOWN -
#define LEFT -
#define RIGHT +

struct Move {
  enum eMoveStyle {
    MOVE_SINGLE,
    MOVE_VECTOR
  };

  enum eMoveRule {
    RULE_EMPTY,
    RULE_CAPTURE,
    RULE_BOTH
  };

  int dRow, dColumn;
  eMoveStyle moveStyle;
  eMoveRule moveRule;

  Move(int dRow, int dColumn, eMoveStyle moveStyle, eMoveRule moveRule);
};

enum eColor {
  WHITE,
  BLACK
};

struct Piece {

  eColor color;

  Piece(eColor color);
  virtual ~Piece();

  virtual std::vector<Move> getMoves() = 0;
  virtual char getChar() = 0;
  bool isFriend(Piece *rhs);
  bool isEnemy(Piece *rhs);
};

#endif /* end of include guard: CHESS_PIECE_H */
