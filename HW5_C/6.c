#include <stdio.h>

void input(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void output(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


int abs_Array(int arr[], int n) {
    int *cout = arr, out_func = 0;
    for(int i = 0; i < n; i++) {
        if (*cout < 0) {
            *cout *= -1;
            out_func++;
        }
        cout++;
    }
    return out_func;
}

int main() {
    int n; scanf("%d", &n);
    int arr[n];
    input(arr, n);
    printf("%d ", abs_Array(arr, n));
    output(arr, n);
}