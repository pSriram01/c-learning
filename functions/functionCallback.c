#include <stdio.h>

void sayHello() {
  printf("Hello from the callback!\n");
}

void runCallback(void (*callback)()) {
  printf("Before calling the callback...\n");
  callback();
  printf("After calling the callback.\n");
}

int main() {
  runCallback(sayHello);
  return 0;
}