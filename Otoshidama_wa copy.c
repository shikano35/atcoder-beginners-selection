// 全探索

#include <stdio.h>

int main() {
  int n, yen;
  scanf("%d %d", &n, &yen);
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n - x; y++) {
      int z = n - x - y;
      if (10000 * x + 5000 * y + 1000 * z == yen) {
        printf("%d %d %d\n", x, y, z);
        return 0;
      }
    }
  }
  printf("-1 -1 -1\n");
  return 0;
}