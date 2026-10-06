/*TASK 3: LOAN INTEREST GROWTH:
A person deposits money and it grows using compound interest. Given the number of years, calculate
how much a sum of money grows if it's multiplied by a fixed growth factor each year (this is
essentially a factorial-style repeated multiplication).*/
#include <stdio.h>

int main() {
    int years;
    float Amount, rate, Interest = 0.00, Power = 1.0;
    printf("Enter the Amount you have deposited:\n");
    scanf(" %f", &Amount);
    printf("Enter the interest rate:\n");
    scanf(" %f", &rate);
    printf("Enter the number of years: \n");
    scanf("%d",&years);
    rate = rate + 1;
    for (int i = 0; i < years ; i++){
        Power = Power * rate;
    }
    Interest = Amount * Power;
    printf("The Total Amount is: %.2f ",Interest);
    return 0;
}