#include <stdio.h>
#include <stdlib.h>
//not stable version
int minimal(int a, int b)
{
    return (a < b) ? a: b;
}

int sravn(const void* a, const void* b) {
    int c1 = *(const int*) a;
    int c2 = *(const int*) b;
    return c1 > c2;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), sravn);
    int dp[n];
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        
        if(i <= 2) {
            dp[i] = dp[i - 1] + diff;
        }
        else {
            dp[i] = minimal(dp[i - 1], dp[i - 2]) + diff;
        }
    }
    printf("%d", dp[n - 1]);

    return 0;
}