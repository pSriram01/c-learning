#include <stdio.h>

int main() {
  int myNum = 10;       // normal variable
  int *ptr = &myNum;    // pointer to int
  int **pptr = &ptr;    // pointer to pointer

  printf("myNum = %d\n", myNum);
  printf("*ptr = %d\n", *ptr);
  printf("**pptr = %d\n", **pptr);

  **pptr = 20; // changes myNum

  printf("myNum = %d\n", myNum); // prints 20
  return 0;
}