#include <stdio.h>

int minumom(int a, int b, int c){
    int d=a+b+c;
    return d/3;
}

int main(){
    int x,y,z;
    printf("give me the first value");
    scanf("%d",&x);
    printf("give me the second value");
    scanf("%d",&y);
    printf("give me the last value");
    scanf("%d",&z);
    printf("the minumom of the thes numbers is %d",minumom(x,y,z));
}