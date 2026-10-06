/*TASK 2: CLASS TEST SCORES:
A teacher has n students in a class. Take n from the user, then take each student's test score (out of
100). Print the class's total score and average score.*/
#include <stdio.h>

int main() {
    int n, Total = 0, Marks;
    float avg = 0.00;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++){
        printf("Enter the marks of student no.%d : \n", i);
        scanf("%d", &Marks);
        if (Marks >= 0 || Marks <= 100){
            Total = Total + Marks;
        }
        else {
            printf("Invalid Marks Entered!!!\n");
        }
    }
    avg = Total / n;
    printf("The total of %d Students is: %d\n", n, Total);
    printf("The Average marks is: %.2f \n", avg);
    return 0;
}