#include <stdio.h>

int main(){
    int n, m; scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; i++){ // ввод
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0], cout_max = 0, min = arr[0][0], cout = 0;
    for(int j = 0; j < m; j++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i][j];
        }
        
        if(sum > max){
            max = sum;
            cout_max = j;
        } // ищем наибольшую колонку
        if(sum < min){
            min = sum;
            cout = j;
        }
        // ищем наименьшую колонку
    }
    for(int i = 0; i < n; i++){
        int temp = arr[i][cout]; // меняем местами колонки
        arr[i][cout] = arr[i][cout_max];
        arr[i][cout_max] = temp;
    }
    for(int i = 0; i < n; i++){ // вывод
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}