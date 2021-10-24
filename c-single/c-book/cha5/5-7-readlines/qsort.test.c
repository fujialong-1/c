#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "qsort.h"

int main(int argc, char *argv[]) {
  char *arr[4] = {
    "abc",
    "aaa",
    "aab",
    "abb"
  };
  char *p = "Hello World!";
  printf("%s\n", p);
  printf("%s\n", arr[0]);
  qsort(arr, 0, 3);
  assert(!strcmp(arr[0], "aaa"));
  assert(!strcmp(arr[3], "abc"));
}
