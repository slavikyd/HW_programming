#include <stdio.h>

int main() {
  int a = 0, i, n, counter = 0, counter2 = 0, counter3 = 0;
  scanf("%d", &n);
  while (a != n) {
    scanf("%d", &i);
    a++;
    if (i == 0){
      counter++;  
    }
    else if (i > 0){
      counter2++;
    }
    else{
      counter3++;
    }
  }

  printf("%d %d %d", counter, counter2, counter3);
}