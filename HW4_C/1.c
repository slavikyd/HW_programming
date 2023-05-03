#include <stdio.h>

int is_leap(int year) //проверяем является ли год високостным
{
   if ((year % 4) == 0 && (year % 4000) != 0 && ((year % 100) != 0 || (year % 400) == 0)) {
   return (1);
   }
   else {
     return (0);
   }
}


int main() {
    int month, year, c;
    scanf("%d %d", &month, &year);
    if (is_leap(year) == 0){ //если год не високосный проверяем отношение к месяцам и в зависимости от этого выводим кол-во дней в месяце
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("%d", 31);
      }
      else if (month == 4 || month == 6 || month == 9 || month == 11){
        printf("%d", 30);
      } //по факту же различается только вывод в else (в случае если не високосный 28, если високосный 29)
      else {
        printf("%d", 28);
      }
    }
  
  if (is_leap(year) == 1){
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("%d", 31);
      }
      else if (month == 4 || month == 6 || month == 9 || month == 11){
        printf("%d", 30);
      }
      else {
        printf("%d", 29);
      }
    }
    return 0;
}