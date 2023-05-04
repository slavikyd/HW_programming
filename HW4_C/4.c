#include <stdio.h>
#include <stdlib.h>
void binary(int num) {
    if(num / 2 != 0) {
        binary(num / 2);
        }
    printf("%d", (num % 2)); //рекурсивная функция перевода из десятичной в двоичную
}




int main() {
    int num;
    scanf("%d", &num);
//если число меньше ноля добавляем минус в начале написания
    if(num < 0) {
        printf("-");
    }
    binary(abs(num));
}
