/*TASK 5: WATER TANK DRAINING SIMULATION:
A water tank starts at a given level. Every hour, if the tank has an even number of liters, half the water
drains out; if it has an odd number, the tank operator adds 3x + 1 liters as an emergency refill rule (a
Collatz-style simulation). Simulate until the tank reaches exactly 1 liter, printing the level each hour
and the total number of hours taken.*/
#include <stdio.h>

int main() {
    int level, hour = 0;
    int hoursum = 0;
    printf("Enter the level of water in tank:\n");
    scanf("%d",&level);
    if (level <= 0) {
        printf("Error: Initial water level must be a positive integer.\n");
        return 1;
    }
    while (level != 1)
    {
        if ((level % 2) == 0){
            level = level / 2;
        }
        else{
            level = (3 * level) + 1;
        }
        printf("The level of water in tank after %d hour is: %d\n",hour, level);

        hour++;
        ++hoursum;
    }
    printf("The total hours taken to reach 1 Litres are: %d", hoursum);
    return 0;
}