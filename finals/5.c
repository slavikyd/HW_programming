#include <stdio.h>

struct Car{
    char* brand;
	char* model;
    int price;
};



int sumCarPrice(struct Car cars[], int n){
    struct Car *res = cars;
    int cout=res->price;
    for(struct Car* i = cars + 1; i < cars + n; i++){
        cout += res->price;
            
        
    }
    return cout;
}


int main(){
    struct Car cars[] = {{"Tesla", "Y", 1500}, {"Ford", "Mustang", 1500}};
    printf("%d", sumCarPrice(cars, 2));
}