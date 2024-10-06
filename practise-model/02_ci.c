// Write a C program that calculates the compound interest for a given principal amount, interest rate, and time period. Use a do-while loop to allow the user to input values multiple times

#include <stdio.h>

int main() {
    float principal, rate, time, compound_interest;
    char choice;

    do {
        printf("Enter the principal amount: ");
        scanf("%f", &principal);
        printf("Enter the interest rate: ");
        scanf("%f", &rate);
        printf("Enter the time period: ");
        scanf("%f", &time);

        compound_interest = principal;
        for (int i = 0; i < time; i++) {
            compound_interest *= (1 + rate / 100);
        }
        compound_interest -= principal;

        printf("Compound interest: %.2f\n", compound_interest);

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');

    return 0;
}