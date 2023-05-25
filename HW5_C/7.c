#include <stdio.h>
#include <string.h>
//NOT WORKS AT ALL
//SOLUTION IS WROOONG
int n;
int aaa[100001];
int cout(int n) {
  if (n == 1) return 2;
  if (n == 2) return 4;
  if (n == 3) return 7;
  if (aaa[n] != -1) return aaa[n];
  return aaa[n] = (cout(n-1) + cout(n-2) + cout(n-3)) % 12345;
}

int main() {
  memset(aaa,-1,sizeof(aaa));
  scanf("%d",&n);
  printf("%d\n",cout(n));
  return 0;
}
