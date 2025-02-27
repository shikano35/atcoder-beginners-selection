#include <stdio.h>

#define MAX 100

void sort(int arr[], int n) {
  int temp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n, a[MAX], alice = 0, bob = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  sort(a, n);

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      alice += a[i];
    } else {
      bob += a[i];
    }
  }

  printf("%d\n", alice - bob);
  return 0;
}
