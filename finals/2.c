#include <stdio.h>

float sumFoo(int n){
    float sum=1, temp;
    for(float i=3; i<=n; i++){
        temp=(i-1)*i;
        sum+=(1/temp);
    }
    return sum;
}


int main(){
    float n;
    scanf("%f", &n);
    printf("%f", sumFoo(n));
}