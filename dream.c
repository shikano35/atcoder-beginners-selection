// 動的計画法

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX 100001

int main() {
  char s[MAX];
  char* strs[4] = {"dream", "dreamer", "erase", "eraser"};
  scanf("%s", s);

  int len = strlen(s);

  bool dp[len + 1];
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;

  for (int i = 1; i <= len; i++) {
    for (int j = 0; j < 4; j++) {
      int word_len = strlen(strs[j]);
      if (i >= word_len && dp[i - word_len]) {
        if (strncmp(s + i - word_len, strs[j], word_len) == 0) {
          dp[i] = 1;
          break;
        }
      }
    }
  }

  if (dp[len]) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
