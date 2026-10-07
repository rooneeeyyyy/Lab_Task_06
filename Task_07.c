/*TASK 7: RESTAURANT ORDERING KIOSK:
A self-service kiosk shows a menu: 1) Add Item, 2) Remove Item, 3) View Total, 4) Checkout. The
kiosk should keep showing this menu and processing the customer's choice repeatedly until they
select Checkout, since the menu must appear at least once even for a walk-up customer.*/
#include <stdio.h>

int main() {
    int choice, foodChoice, removeChoice;
    int total = 0;
    do {
        printf("\n~~~~~ Ruhaan's Restaurant ~~~~~\n");
        printf("| Type 1 to add item    |\n");
        printf("| Type 2 to remove item |\n");
        printf("| Type 3 to view total  |\n");
        printf("| Type 4 to checkout    |\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\n--- Select Item to Add ---\n");
                printf("1. Biryani  (Rs. 350)\n");
                printf("2. Nihari   (Rs. 620)\n");
                printf("3. Qorma    (Rs. 800)\n");
                printf("4. Karahi   (Rs. 1500)\n");
                printf("5. Shashlik (Rs. 700)\n");
                printf("Select option: ");
                scanf("%d", &foodChoice);
                switch (foodChoice) {
                    case 1:
                        printf("Biryani added to cart.\n");
                        total += 350;
                        break;
                    case 2:
                        printf("Nihari added to cart.\n");
                        total += 620;
                        break;
                    case 3:
                        printf("Qorma added to cart.\n");
                        total += 800;
                        break;
                    case 4:
                        printf("Karahi added to cart.\n");
                        total += 1500;
                        break;
                    case 5:
                        printf("Shashlik added to cart.\n");
                        total += 700;
                        break;
                    default:
                        printf("Invalid food selection.\n");
                        break;
                }
                break; 
            case 2:
                printf("\n--- Select Item to Remove ---\n");
                printf("1. Biryani  (Rs. 350)\n");
                printf("2. Nihari   (Rs. 620)\n");
                printf("3. Qorma    (Rs. 800)\n");
                printf("4. Karahi   (Rs. 1500)\n");
                printf("5. Shashlik (Rs. 700)\n");
                printf("Select option: ");
                scanf("%d", &removeChoice);
                switch (removeChoice) {
                    case 1:
                        if (total >= 350) {
                            printf("Biryani removed from cart.\n");
                            total -= 350;
                        } else {
                            printf("Cannot remove Biryani (Cart value too low).\n");
                        }
                        break;
                    case 2:
                        if (total >= 620) {
                            printf("Nihari removed from cart.\n");
                            total -= 620;
                        } else {
                            printf("Cannot remove Nihari (Cart value too low).\n");
                        }
                        break;
                    case 3:
                        if (total >= 800) {
                            printf("Qorma removed from cart.\n");
                            total -= 800;
                        } else {
                            printf("Cannot remove Qorma (Cart value too low).\n");
                        }
                        break;
                    case 4:
                        if (total >= 1500) {
                            printf("Karahi removed from cart.\n");
                            total -= 1500;
                        } else {
                            printf("Cannot remove Karahi (Cart value too low).\n");
                        }
                        break;
                    case 5:
                        if (total >= 700) {
                            printf("Shashlik removed from cart.\n");
                            total -= 700;
                        } else {
                            printf("Cannot remove Shashlik (Cart value too low).\n");
                        }
                        break;
                    default:
                        printf("Invalid removal selection.\n");
                        break;
                }
                break; 
            case 3:
                printf("\nYour current total is: Rs. %d\n", total);
                break;
            case 4:
                printf("\nChecking out... Your final total bill is: Rs. %d\n", total);
                printf("Thank you for ordering at Ruhaan's Restaurant!\n");
                break;
            default:
                printf("\nInvalid menu option! Please try again.\n");
                break;
        }
    } while (choice != 4);
    return 0;
}