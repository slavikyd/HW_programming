#include <stdio.h>

void list_input(int arr[], int n) {
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);  //считваем лист
    }
}

void list_print(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    } //выводим лист
}


int main(){
    int n; scanf("%d", &n);
    int arr[n];
    list_input(arr, n);
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n / 2 + i];
        arr[n / 2 + i] = temp; //считаем и сразу заменяем используя доп переменную
    }
    list_print(arr, n);
    return 0;
}