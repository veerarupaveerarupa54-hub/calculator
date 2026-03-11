#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, withdraw, deposit;

    printf("Simple ATM Program\n");

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Deposit successful\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);

                if(withdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= withdraw;
                    printf("Please collect your cash\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}