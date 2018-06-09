#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 4;
  int y = -5;

  int r = (x ^ y) < 0;

  int x_1 = -4;
  int y_1 = -5;

  int r_1 = (x_1 ^ y_1) < 0;

  printf("%d, %d = %d\n", x, y, r);
  printf("%d, %d = %d\n", x_1, y_1, r_1);
}
