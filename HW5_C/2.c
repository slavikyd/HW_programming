#include <stdio.h>

struct Person
{
	int age; 
	char name[30]; 
};

float averageAge(struct Person arr[], int n) {
    float average = 0;
    for(int i = 0; i < n; i++){
        average += arr[i].age;
    }
    return average / n;
}

int main() {
    int n; 
    scanf("%d", &n);
    struct Person arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i].age);
        scanf("%s", arr[i].name);
    }
    printf("%f", averageAge(arr, n));
}