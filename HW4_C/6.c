#include <stdio.h>

int main() {
    int n, out = 0, num;
    scanf("%d", &n);

//пока число меньше введенного ждем в строку числа
    for(int i = 0; i < n; i++) {
        scanf("%d", &num); 
    
        if(num > 0) {
            out++; //если число положительное обновляем счетчик
        }
    }
    printf("%d", out);
}