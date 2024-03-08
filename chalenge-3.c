#include <stdio.h>

float thePriceAfterTax(int HT, int tax) {
    float TTC = HT * (1 + tax / 100.0);
    return TTC;
}

int main() {
    int N, taxAmount;
    printf("Enter the tax amount: ");
    scanf("%d", &taxAmount);
    printf("Enter a price without tax: ");
    scanf("%d", &N);
    printf("The price that you are going to pay after tax is %.2f\n", thePriceAfterTax(N, taxAmount));
    return 0;
}
// I don't give a shit if this code worke's or not Idont give a shit