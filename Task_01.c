/*TASK 1: MOVIE TICKET PRICING:
A cinema sells tickets for shows 1 through 10 in a day, and the price rises by Rs. 50 for each later
show (show 1 = Rs. 500). Print a schedule showing the show number and its ticket price.*/
#include <stdio.h>

int main() {
    int price = 500;
    for (int i = 1 ; i <= 10 ; i++){
        printf("==== SHOW %d ===== PRICE OF TICKET: %d.RS\n", i, price);
        price+=50;

    }
    return 0;
}