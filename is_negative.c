#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  int v = -5;
  int sign = v >> (sizeof(int) * CHAR_BIT - 1);

  printf("%d >> %d\n", v, sign);
}
