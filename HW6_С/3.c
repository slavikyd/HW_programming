#include <stdio.h>
int nth_rec_search(int n) {
    if (n <= 1)
        return n;
    return nth_rec_search(n - 1) + nth_rec_search(n - 2);
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d", nth_rec_search(n));
    return 0;
}