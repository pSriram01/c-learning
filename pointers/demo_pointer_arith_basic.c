#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int *p = myNumbers;  // points to myNumbers[0]

  printf("%d\n", *p);     // 25
  //p++; // Move the pointer to the next element (myNumbers[1])
  printf("%d\n", *(p + 1)); // 50
  printf("%d\n", *(p + 2)); // 75
  printf("%d\n", *(p + 3)); // 100

  int *start = &myNumbers[1]; // points to 20
  int *end = &myNumbers[4];   // points to 50

  printf("%ld\n", end - start); // 3 elements apart

  return 0;
}