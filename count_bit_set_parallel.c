#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int v = 149; // 10010101
  unsigned int result = v;

  unsigned int S[] = {1, 2, 4};
  unsigned int B[] = {0b01010101, 0b00110011, 0b00001111};

  result = ((result >> S[0]) & B[0]) + (result & B[0]);
  result = ((result >> S[1]) & B[1]) + (result & B[1]);
  result = ((result >> S[2]) & B[2]) + (result & B[2]);

  printf("%d >> %d\n", v, result);
}
