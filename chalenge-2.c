#include <stdio.h>

int devidedBy5(int num){
    int res = num % 5;
    if (res == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    int N;
    printf("enter a number");
    scanf("%d",&N);
    if (devidedBy5(N)==1)
    {
        printf("the number is divisible by 5 ");
    }
    else
    {
        printf("the number is not divisible by 5 ");
    }
    
    
}