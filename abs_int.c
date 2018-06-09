#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  int v = -5;
  unsigned int r;
  int mask = v >> (sizeof(int) * CHAR_BIT - 1);

  r = (mask + v) ^ mask;

  printf("%d >> %d\n", v, r);
}
