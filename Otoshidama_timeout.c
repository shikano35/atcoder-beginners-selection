// 1 秒間で処理できる for 文ループの回数は、100,000,000=10^8回

#include <stdio.h>

int main() {
  int n, yen;
  scanf("%d %d", &n, &yen);
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      for (int z = 0; z < n; z++) {
        if (x + y + z == n && 10000 * x + 5000 * y + 1000 * z == yen) {
          printf("%d %d %d\n", x, y, z);
          return 0;
        }
      }
    }
  }
  printf("-1 -1 -1\n");
  return 0;
}