#include "stdio.h"
#include "stdlib.h"

#define FLIP_DECK_SIZE 112
#define SIDE 2

struct Deck {
  int arr[FLIP_DECK_SIZE][SIDE];
  int top[1][2];
};

void initialize(Deck *deck){
  deck->top[0][0] = -1;
  deck->top[0][1] = -1;
}

bool isEmpty(Deck *deck){
  return deck->top[0][0] == -1;
}

// add card to end
//
//
//
// remove card from end
//
//
//
//
// create deck?
// arr_color
// arr_numbers
// maybe implement flip cards too
//

