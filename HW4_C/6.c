#include <stdio.h>

int main() {
    int n, out = 0, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num); 
        if(num > 0) {
            out++;
        }
    }
    printf("%d", out);
}