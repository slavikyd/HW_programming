#include <stdio.h>

int main() {
    int n, k, cout;
    scanf("%d %d", &n, &k);
    for(cout = 1; cout < n; cout++)
    {
        printf("    ");
    }

  
    for(cout = 1; cout <= k; cout++){
        printf("%4d", cout);
        if((n + cout - 1) % 7 == 0 || cout == k)
        {
            printf("\n");
        }
    }
    return 0;
}