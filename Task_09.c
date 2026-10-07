/*TASK 9: WAREHOUSE INVENTORY LOOKUP:
A warehouse stores the stock count of 10 different product shelves in an array. Print the shelf stock
levels in reverse order (as if scanning from the back of the warehouse to the front), then let a staff
member search for a specific stock count and report which shelf (index) holds it, or that it doesn't
exist.*/
#include<stdio.h>
int main(){
    int stock[10],i,search,found=0;
    printf("Enter stock count for 10 shelves:\n");
    for(i=0;i<10;i++){
        scanf("%d",&stock[i]);
    }
    printf("\nStock levels in reverse order:\n");
    for(i=9;i>=0;i--){
        printf("Shelf %d: %d\n",i,stock[i]);
    }
    printf("\nEnter stock count to search: ");
    scanf("%d",&search);
    for(i=0;i<10;i++){
        if(stock[i]==search){
            printf("Stock count %d found at shelf index %d.\n",search,i);
            found=1;
        }
    }
    if(found==0){
        printf("Stock count %d does not exist.\n",search);
    }
    return 0;
}