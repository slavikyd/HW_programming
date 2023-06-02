#include <stdio.h>

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }
}


void changeMin(int arr[], int n){
    int min1 = 1e9, min2 = 1e9, temp, ind_min1=0, ind_min2=0;
    for(int i=0; i<n; i++){
        if(arr[i]<min1){
            min1=arr[i];
            ind_min1=i;
        }
    }
    for (int i=0; i < n; i++){
        if(arr[i] != min1 && arr[i] < min2){
            min2 = arr[i];
            ind_min2=i;
        }
    }
    

    temp=arr[ind_min1];
    arr[ind_min1]=min2;
    arr[ind_min2]=min1;
}

int main(){
    int n = 5;
    int arr[] = {3, 2, 1, 4, 0};
    changeMin(arr, n);
    printArray(arr, n);
}