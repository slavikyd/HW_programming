#include <stdio.h>


int isPalindrom(int num){
    int reverse = 0, remainder, num_temp=num;

    while (num_temp != 0) {
    remainder = num_temp % 10;
    reverse = reverse * 10 + remainder;
    num_temp /= 10;
    }
    if(reverse==num){
      return 1;
    }
    else{
      return 0;
    }
}

int main(){
    int num, out;
    scanf("%d", &num);
    if(isPalindrom(num)){
      printf("%d is Palindrom\n", num);
    }
    else{
      printf("%d is not Palindrom\n", num);
    }
    
}