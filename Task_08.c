/*TASK 8: WEATHER STATION TEMPERATURE LOG:
A weather station records the temperature (°C) every hour for 8 hours in a day. Store the readings in
an array and report the hottest temperature, the coldest temperature, and the second-hottest
temperature of the day.*/
#include <stdio.h>

int main() {
    int temp[8],max = 0, min = 100000;
    for (int i = 0; i < 8; i++)
    {
        printf("Enter the temperature:\n");
        scanf("%d",&temp[i]);
        if (temp[i] > max){
            max = temp[i];
        }
        else if (temp[i] < min)
        {
            min = temp[i];
        }
    }
    printf("The hottest temperature is: %d\n", max);
    printf("The lowest temperature is: %d\n", min);
    
    return 0;
}