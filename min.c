#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  int x = 4;
  int y = -5;

  int min = y + ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1)));

  printf("min(%d, %d) = %d\n", x, y, min);
}
