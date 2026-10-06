/*TASK 4: ATM PIN DIGIT CHECK:
A bank's system needs to verify a 4-to-6 digit PIN entered by a customer. Take the PIN as an integer
and, digit by digit, find the sum of its digits and print the PIN reversed (used as a basic
checksum/verification step).*/

#include <stdio.h>

int main() {
    int Pin, temp, digitcount = 0, sum = 0;
    int reversedPin = 0 , digit;
    printf("Enter your pin: \n");
    scanf("%d",&Pin);
    temp = Pin;
    while (temp > 0){
        digit = temp % 10;
        sum = sum + digit;
        reversedPin = reversedPin * 10 + digit;
        temp = temp / 10;
        digitcount++;
    }

    if (digitcount >= 4 && digitcount <= 6){
        printf("\n Digit Count : %d\n",digitcount);
        printf("\n Reversed PIN: %d\n", reversedPin);
        printf("\n PIN Sum     : %d\n",sum);
        printf("\nStatus       : PIN Verified\n");

    }
    else{
        printf("\n **INVALID PIN ENTERED** \n");
    }
    return 0;
}