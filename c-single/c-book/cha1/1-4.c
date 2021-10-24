#include<stdio.h>
float celsius2fahr(int degree) {
    return 32 + degree * 9 / 5;
}

int printFahrList(int start, int end, int step, int withHead) {
  if (start <= end && step < 0 || start >= end && step > 0 || step == 0) {
    printf("params error!\n");
    return 1;
  }

  if (withHead) {
    printf("celsius\tfahr\n");
  }

  int i = start;
  while (start <= end ? i <= end : i >= end) {
    printf("%d\t%.1f\n", i, celsius2fahr(i));
    i += step;
  }
}

int main() {
  printFahrList(30, 50, 1, 1);
}