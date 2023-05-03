#include <stdio.h>

int main() {
  int a = 0, i, n, counter = 0, counter2 = 0, counter3 = 0;
  scanf("%d", &n);
  //вместо цикла for
  while (a != n) {
    scanf("%d", &i);
    a++; //если ввденное число ноль обновляем счетчик нулей, если положительное то счетчик положительных, если отрицательных то счетчик отрицательных
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
//выводим три переменных в одну строку
  printf("%d %d %d", counter, counter2, counter3);
}