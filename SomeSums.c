// 1 以上 N 以下の整数のうち、10 進法での各桁の和が A 以上 B
// 以下であるものの総和
#include <stdio.h>

int main() {
  int n, a, b, sum = 0, num = 0, digit_sum = 0;
  scanf("%d %d %d", &n, &a, &b);
  for (int i = 1; i <= n; i++) {
    num = i;
    digit_sum = 0;
    while (num > 0) {
      digit_sum += num % 10;
      num /= 10;
    }
    if (a <= digit_sum && digit_sum <= b) {
      sum += i;
    }
  }
  printf("%d\n", sum);
  return 0;
}