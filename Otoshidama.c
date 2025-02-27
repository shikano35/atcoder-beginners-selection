// 全探索

#include <stdio.h>

int main() {
  int n, yen;
  int x = -1, y = -1, z = -1;

  scanf("%d %d", &n, &yen);
  for (int i = 0; i <= n; i++) {
    for (int j = 0; i + j <= n; j++) {
      int k = n - i - j;
      int sum = 10000 * i + 5000 * j + 1000 * k;
      if (sum == yen) {
        x = i;
        y = j;
        z = k;
        break;
      }
    }
  }
  printf("%d %d %d\n", x, y, z);
  return 0;
}