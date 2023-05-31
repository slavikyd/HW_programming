#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* join(char* words[], int n){
    char *cout = malloc(255);
    for(int i = 0; i < n - 1; i++){
        strcat(cout, words[i]); // хитрая стоковая функция которая позволяет к строке из первого аргумента добавить значение строки из второго аргумента
        //а тут просто костыльно добовляем пробел чтобы было по тз
        strcat(cout, " ");
    }
    strcat(cout, words[n - 1]); //записываем в выходную строку, убирая лишний пробел который добавился в конец
    return cout;
}

int main(){
    char* words[7] = {"Hello", "world"};
    printf("%s ", join(words, 2));
}