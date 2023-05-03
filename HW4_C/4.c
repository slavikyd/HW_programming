#include <stdio.h>
#include <stdlib.h>
void binary(int num) {
    if(num / 2 != 0) {
        binary(num / 2);
        }
    printf("%d", (num % 2));
}




int main() {
    int num;
    scanf("%d", &num);

    if(num < 0) {
        printf("-");
    }
    binary(abs(num));
}