#include <stdio.h>
#include <string.h>
//функция проверки подходит ли нам пароль
int pass_checker(char pass[]){
    int n = strlen(pass);
    
    int bl = 0, sl = 0, dig = 0, cout = 0;
    //проходимся по всем символам ввденным 
    for(int i = 0; i < n; i++){
        
        if(pass[i] < 33 || pass[i] > 126) {
            return 0;
        }
        //проверяем соответствие по ASCI, наличие букв, наличие заглавных букв и наличие минимального кол-ва символов
        else if(pass[i] >= 'a' && pass[i] <= 'z'){
            sl = 1;
        }
        
        else if(pass[i] >= 'A' && pass[i] <= 'Z'){ 
            bl = 1;
        }
        
        else if(pass[i] >= '0' && pass[i] <= '9'){
            dig = 1;
        }
        
        else if(pass[i] >= 33 && pass[i] <= 126){
            cout = 1;
        }
    }
    
    if(n < 8 || n > 14) {
        return 0;
    }
    
    else if(cout + dig + sl + bl < 3)    {
        return 0;
    }
    
    return 1;
}



int main(){
    char pass[101];
    scanf("%s", pass);
    //
    if(pass_checker(pass)) {
        printf("YES");
//если проверки пройдены выводим YES в ином случае NO
    }
    
    else {
        printf("NO");
    }
}