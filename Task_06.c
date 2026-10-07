/*TASK 6: EXAM RESULT ENTRY SYSTEM:
A university's result-entry portal must ensure a data-entry clerk cannot submit a mark outside the 0–
100 range. Keep asking the clerk to re-enter the mark until it is valid, then declare the student Pass
(≥50) or fail.*/
#include <stdio.h>

int main() {
    int marks;
    do
    {
        printf("Enter the marks:\n");
        scanf("%d",&marks);
        if (marks >=50 &&  marks <= 100){
            printf("Pass\n");
        }
        else if (marks > 100 || marks < 0){
            printf("Invalid Number\n");
        }
        else{
            printf("Fail\n");
        }
    } while (marks >= 0 && marks <= 100);
    
    return 0;
}