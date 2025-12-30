#include <stdio.h>

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  printf("Before swap: \n");
  printf("%d %d\n", firstNum, secondNum);

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  printf("After swap: \n");
  printf("%d %d\n", firstNum, secondNum);

  return 0;
}