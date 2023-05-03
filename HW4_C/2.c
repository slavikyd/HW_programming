#include <stdio.h>

int main() {
    int n, k, cout, crt;
    scanf("%d %d", &n, &k);
    for(cout = 1; cout < n; cout++)
    {
        printf("    "); //в зависимости от того с какого дня недели начинается месяц добавляем пробелы
    }

  
    for(cout = 1; cout <= k; cout++){
        printf("%4d", cout);
        crt = n + cout - 1;
        if(crt % 7 == 0 || cout == k) //если число кратно семи или равно 0 переносим строку
        {
            printf("\n");
        }
    }
    return 0;
}