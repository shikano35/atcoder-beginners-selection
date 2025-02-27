#include <stdio.h>
int main() {
  int count = 0;
  char s[4];
  scanf("%s", s);
  for (int i = 0; i < 3; i++) {
    if (s[i] == '1') {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}