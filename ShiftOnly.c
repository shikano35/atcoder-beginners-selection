#include <stdio.h>

#define MAX 201

int main(void) {
  int n, a[MAX], count = 0, flag = 0;
  scanf("%d", &n);
  while (1) {
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (a[i] % 2 == 0) {
        a[i] = a[i] / 2;
      } else {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      count++;
    } else {
      break;
    }
  }
  printf("%d\n", count);
  return 0;
}