#include <stdio.h>

int main(void) {
  int a, b, c, x, count = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &x);
  for (int i = 0; i < a + 1; i++) {
    for (int j = 0; j < b + 1; j++) {
      for (int k = 0; k < c + 1; k++) {
        if (500 * i + 100 * j + 50 * k == x) {
          count++;
        }
      }
    }
  }
  printf("%d\n", count);
  return 0;
}