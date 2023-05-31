#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int concat(int с1, int с2) {  
    char cout1[20];
    char cout2[20];   //хитрый как лис жулик конкатенатор на базе второй задаче с конвертацией в стринг и обратно
    sprintf(cout1, "%d", с1);
    sprintf(cout2, "%d", с2);
    strcat(cout1, cout2);
    int c = atoi(cout1);
    return c;
}



int ispolnitel(int num){
    int frst, scnd, trd;
    trd = num % 10; // вытаскиваем из числа цифры, считаем, конкатенируем в одно число и выводим
    scnd = ((num - trd) / 10) % 10;
    frst = (num - trd - scnd) / 100;
    int frst_scnd_cout = frst*scnd;
    int scnd_trd = scnd*trd;
    if(frst_scnd_cout>scnd_trd){
      int out; 
      out = concat(scnd_trd, frst_scnd_cout);
      printf("%d", out);
    }
    else{
      int out;
      out = concat(frst_scnd_cout, scnd_trd);
      printf("%d", out);
    }
  
    
}

int main(){
    int num;
    scanf("%d", &num);
    ispolnitel(num);
}