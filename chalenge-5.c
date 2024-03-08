#include <stdio.h>

void age_and_sex(int age, char sex) {
    printf("you are %d years old and you are a %c\n", age, sex);
}

int main() {
    int age;
    char sex;
    printf("enter you'r age: ");
    scanf("%d", &age);
    printf("enter you'r sex (M/F): ");
    scanf(" %c", &sex); 
    age_and_sex(age, sex);
    return 0;
}