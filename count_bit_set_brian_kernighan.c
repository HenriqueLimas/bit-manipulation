#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int v = 0b10010101; // 149
  unsigned int c = 0;

  printf("%d = ", v);

  for (;v;c++) {
    v &= v -1;
  }

  printf("%d\n", c);
}
