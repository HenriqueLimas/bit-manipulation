#include <stdio.h>
#include <stdlib.h>

int main() {
  int v = 16;

  int r = (v & (v - 1)) == 0;

  // Fix 0
  int v_1 = 0;
  int r_1 = v_1 && !(v_1 & (v_1 - 1));

  printf("%d = %d\n", v, r);
  printf("%d = %d\n", v_1, r_1);
}
