#include <stdio.h>

int main(void) {
  int x = 4;
  x = 6;
  int y;
  y = 2*x;
  x = 7;

  printf("x:%d y:%d\n", x, y);

  return 0;
}

