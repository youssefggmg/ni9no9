#include <stdio.h>

void driving_sectifecation(int age) {
        if (age < 18) {
				printf("Sorry, you are too around to drive this car. Powering off");
			} else if (age > 18) {
				printf("Powering On. Enjoy the ride!");
			} else if (age == 18) {
				printf("Congratulations on your first year of driving. Enjoy the ride!");
			}
    }
int main() {
    int age;
    printf("enter you'r age: ");
    scanf("%d",&age);
    driving_sectifecation(age);
    return 0;
}
