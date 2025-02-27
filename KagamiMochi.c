#include <stdio.h>

#define MAX 120

int main() {
  int n, d[MAX], count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (d[i] == d[j]) {
        count++;
        break;
      }
    }
  }
  printf("%d\n", n - count);
}