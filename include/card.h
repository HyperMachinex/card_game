#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// Cards varies depend on game mode (flip, default etc.)

struct card {
  int id; // id of card
  int color;  // planned -> 1-red, 2-blue, 3-yellow, 4-green
  int number; // 0-10, 11->reverse, 12->block, 13->draw 1 colored 14->change color black, 15->draw 2 black, 16 -> draw 4 black, 17->flip
  int rev_color; // 1-cyan, 2-purple, 3-orange, 4-pink
  int rev_number; // 0-10, 11->loop, 12->draw 5 colored, 13-> flip, 14->reverse, 15->change color black, 16->draw till color
};

