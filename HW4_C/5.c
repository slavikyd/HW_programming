#include <stdio.h>

int main() {
  int a, b = 0, i = 1, counter = 0;
  double out;
  while (a != 0) {
    scanf("%d", &i);
    a = i;
    b = b + a;
    counter++;
  }

  out = (double)b / (double)(counter-1);
  printf("%f", out);
}