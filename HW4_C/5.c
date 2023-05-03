#include <stdio.h>

int main() {
  int a, b = 0, i = 1, counter = 0;
  double out;
  while (a != 0) { //пока мы на вход не получили ноль продолжаем считывать числа
    scanf("%d", &i);
    a = i;
    b = b + a;
    counter++;
  }

  out = (double)b / (double)(counter-1); //считаем среднее арифмитическое но из счетчика вычитаем последнее число в лице ноля
  printf("%f", out);
}