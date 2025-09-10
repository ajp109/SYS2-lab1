#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void test(int32_t value) {
  int32_t count = value + 5;
  printf("In test(), value = %"PRId32", count = %"PRId32"\n", value, count);
}
  
int main(void) {
  int32_t count = 5;
  test(count);
  printf("In main(), count = %"PRId32"\n", count);
  return 0;
}

