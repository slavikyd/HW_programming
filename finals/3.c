#include <stdio.h>


void super_func(){
    int a, cout=0, sum=0;
    float out;
    scanf("%d", &a);
    while(a != 0){
        if((a%10)==3){
            cout++;
            sum+=a;
        }
        scanf("%d", &a);
    }
  out = sum/cout;
  printf("%f", out);
}

int main(){
    super_func();
    return 0;
}