#include <stdio.h>


void reduce_fraction(int * a, int * b){
    int div = cout_div_lowest(*a, *b);
    *a /= div;
    *b /= div;
}

int cout_div_lowest(int a, int b){
    if(b == 0){
        return a;
    }
    return cout_div_lowest(b, a % b);
}



int main(){
    int a, b; scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);
}