#include <stdio.h>

// void array_input(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         scanf("%d %d", &arr[i].x, &arr[i].y);
//     }
// }




struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n){
    struct Move out = {0, 0};
    for(int i = 0; i < n; i++){
        out.x += arr[i].x;
        out.y += arr[i].y;
    }
    return out;
}

int main(){
    int n; 
    scanf("%d", &n);
    struct Move arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    struct Move out = getFinishPoint(arr, n);
    printf("%d %d", out.x, out.y);
}