#include <stdio.h>
#include <stdlib.h>
//not stable 
int minimal(int a, int b)
{
    return (a < b) ? a: b;
}



void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
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
