#include <stdio.h>

// Run bubble sort on {97, 16, 45, 63, 13, 22, 7, 58, 72}

int swaps = 0;

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
  swaps++;
}

int bubbleSort(int arr[], int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
    }
  }
}
void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  printf("Original Array: ");
  printArr(arr, 9);
  bubbleSort(arr, 9);
  printf("Sorted Array: ");
  printArr(arr, 9);
  printf("Total Swaps: %d", swaps);
  return 0;
}