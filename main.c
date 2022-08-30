#include <stdio.h>
#include <stdlib.h>


void transactions(){
    printf("\n\n      | - < < < < < < < < < < < < <    ATM    > > > > > > > > > > > > > - |\n\n\n\n"
           "1)Account Balance\n"
           "2)Withdrawal\n"
           "3)Deposit\n"
           "4)Bill Payment\n"
           "5)Funds Transfer\n"
           "6)Log out");
}

void atm(int choose){
    int money = 4000;
    int ex_amount;
    int amount = 0;
    char cc[5];
    switch (choose) {
        case 1:
            printf("Current Balance : %d",money);

            break;
        case 2:
            printf("The amount you want to withdraw: ");
            scanf("%d",&amount);
            ex_amount = money;
            money = money - amount;

            system("clear");

            int i = 0;
            while(i<60){ printf("-"); i++;}

            printf("\nOld Balance : %d\n",ex_amount);
            printf("The amount of money withdrawn : %d\n",amount);
            printf("Current Balance : %d\n",money);

            int z=0;
            while(z<60){ printf("-"); z++;}
            break;
        case 3:
            printf("The amount you want to deposit : ");
            scanf("%d",&amount);
            ex_amount = money;
            money = money + amount;

            system("clear");

            int j=0;
            while(j<60){ printf("-"); j++;}

            printf("\nOld Balance : %d\n",ex_amount);
            printf("The amount of money deposited : %d\n",amount);
            printf("Current Balance : %d\n",money);

            int l=0;
            while(l<60){ printf("-"); l++;}
            break;
        case 4:
            printf("1)Electricity bill - 100 dollars\n"
                   "2)Water bill - 150 dollars\n"
                   "3)Internet bill - 135 dollars\n"
                   "4)Phone bill - 180 dollars\n\n");
            int b;
            printf("Select the invoice to be paid : ");
            scanf("%d",&b);

            switch (b) {
                case 1:
                    printf("Electricity bill : 100 dollars\n");
                    amount=100;
                    ex_amount= money;
                    money = money -amount;

                    system("clear");

                    printf("Electricity bill has been paid");
                    printf("Old Balance : %d\n",ex_amount);
                    printf("Current Balance : %d\n",money);
                    break;
                case 2:
                    printf("Water bill : 150 dollars\n");
                    amount=150;
                    ex_amount=money;
                    money = money - amount;

                    system("clear");

                    printf("Water bill has been paid\n");
                    printf("Old Balance : %d\n",ex_amount);
                    printf("Current Balance : %d\n",money);
                    break;
                case 3:
                    printf("Internet bill : 135 dollars\n");
                    amount=135;
                    ex_amount= money;
                    money= money - amount;

                    system("clear");

                    printf("Internet bill has been paid\n");
                    printf("Old Balance : %d\n",ex_amount);
                    printf("Current Balance : %d\n",money);
                    break;
                case 4:
                    printf("Phone bill : 180 dollars\n");
                    amount=180;
                    ex_amount=money;
                    money=money -amount;

                    system("clear");

                    printf("Internet bill has been paid\n");
                    printf("Old Balance : %d\n",ex_amount);
                    printf("Current Balance : %d\n",money);
                    break;
                default:
                    printf("Invalid choice");
            }
            break;
        case 5:
            printf("Recipient country code: ");
            scanf("%s",&cc);
            printf("Write the iban to send money: %s ",cc);
            int iban;
            scanf("%d", &iban);
            printf("Amount of money to be sent: ");
            scanf("%d",&amount);

            ex_amount=money;
            money = money-amount;

            system("clear");

            printf("Money has been sent\n");
            printf("Old Balance : %d\n",ex_amount);
            printf("Current Balance : %d\n",money);
            break;
        default:
            printf("Invalid choice");
    }
}

int main() { int choose,pinn;
    do{ printf("Enter your card pin: ");
        scanf("%d",&pinn);

        if (pinn !=1525){
            printf("Wrong pin !\n");
        }
    } while (pinn !=1525);

    do{ transactions();
        printf("\n\nPlease select transaction: ");
        scanf("%d",&choose);

        system("clear");

        atm(choose);
    } while (6 != choose);

    return 0;
}