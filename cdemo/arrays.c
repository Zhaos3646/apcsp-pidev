#include <stdio.h>

#define ArrayLength 100

void arrayAdd(int arr[], int s, int n) {
  for (int i = 0; i < s; i++) {
    arr[i] = i + n;
  }
}

int main() {
  int array[ArrayLength];
  int* ptr = array;
  for (int i = 0; i < ArrayLength; i++) {
    array[i] = i*i;
  }
  arrayAdd(array, ArrayLength, 3);
  for (int i = 0; i < ArrayLength; i++) {
    printf("%d: %d\n",i, array[i]);
  }
}
