#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

struct IntVector {
  int32_t x;
  int32_t y;
};

int main(void) {
  struct IntVector p;
  
  p.x = -3;
  p.y = 1;

  printf("(%"PRId32", %"PRId32")\r\n", p.x, p.y);

  return 0;
}
