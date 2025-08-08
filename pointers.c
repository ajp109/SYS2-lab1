#include <stdio.h>

int main(void) {

  int number = 10;

  int *const pointer = &number;

  printf("Number is %d, stored at address %p\n", number, (void *)&number);
  printf("Pointer is %p, stored at address %p, target value is %d\n", (void *)pointer, (void *)&pointer, *pointer);

  *pointer = 12;

  printf("Number is %d, stored at address %p\n", number, (void *)&number);
  printf("Pointer is %p, stored at address %p, target value is %d\n", (void *)pointer, (void *)&pointer, *pointer);

  int anotherNumber = 20;
  printf("anotherNumber is %d, stored at address %p\n", anotherNumber, (void *)&anotherNumber);
  pointer = &anotherNumber;
  *pointer = 24;
  printf("Number is %d, stored at address %p\n", number, (void *)&number);
  printf("anotherNumber is %d, stored at address %p\n", anotherNumber, (void *)&anotherNumber);
  printf("Pointer is %p, stored at address %p, target value is %d\n", (void *)pointer, (void *)&pointer, *pointer);
  
  return 0;
}
