#include <stdio.h>
#include <string.h>

int n;
int dp[100001];
int cout(int n) {
  if (n == 1) return 2;
  if (n == 2) return 4;
  if (n == 3) return 7;
  if (dp[n] != -1) return dp[n];
  return dp[n] = (cout(n-1) + cout(n-2) + cout(n-3)) % 12345;
}

int main() {
  memset(dp,-1,sizeof(dp));
  scanf("%d",&n);
  printf("%d\n",cout(n));
  return 0;
}