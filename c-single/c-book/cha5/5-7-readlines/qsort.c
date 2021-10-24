#include <string.h>

static swap(char *v[], int i, int j) {
  char *temp =  v[i];
  v[i] = v[j];
  v[j] = temp;
}

void qsort(char *v[], int left, int right) {
  if (left > right) {
    return;
  }
  char *temp;
  int i, j;
  //int temp;
  i = left;
  j = right;
  temp = v[left];
  while(i < j) {
    while(i < j && strcmp(v[j], temp) >= 0) {
      j--;
    }
    while(i < j && strcmp(v[i], temp) <= 0) {
      i++;
    }
    if(i < j) swap(v, i, j);
  }
  swap(v, left, i);
  qsort(v, left, i - 1);
  qsort(v, i + 1, right);
}
