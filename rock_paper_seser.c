#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* compare(char userchois, char *cpuChois) {
    if (userchois == cpuChois[0]) {
        return "tide";
    } else if ((userchois == 'r' && cpuChois[0] == 's') ||
                (userchois == 'p' && cpuChois[0] == 'r') ||
                (userchois == 's' && cpuChois[0] == 'p')) {
        return "you win";
    } else {
        return "you lose";
    }
}
char *CpuChois(){
    char cpuChois;
    int randomNum = (rand() % 3) + 1;
    if (randomNum ==1)
    {
        return "rock";
    }
    else if (randomNum == 2)
    {
        return "papre";
    }
    else if (randomNum == 3)
    {
        return "scissors";
    }
    else
    {
        return "";
    }
}

int main() {
    char choise[255];
    char userchoise[255];
    printf("Let's play Rock Paper Scissors.\n");
    printf("When I say 'shoot', Choose: rock, paper, or scissors.\n");
    printf("Are you ready? Write 'yes' if you are.");
    scanf(" %s",&choise);
    if (strcmp(choise,"yes")==0)
    {
        printf("Great!");
        printf("rock - paper - scissors, shoot!"); 
        scanf("%s",&userchoise);
        char *result=CpuChois();
        compare(userchoise,result);
    }
    else
    {
        printf("Darn, some other time..");
    }
}
