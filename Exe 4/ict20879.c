#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" \t \t \t \t Welcome to the ABC Bank! \n ");

    // 1. Deposit 2. Withdraw 3. Check Balance
    printf (" \t \t \t \t Select one of the options do you want!\n");
    printf ("\n \t \t \t \t 1. Deposit \t 2. Withdraw \t 3. Check Balance \t \n \n");

    printf ("  Your choice :  ");


    int d = 0 ;// Deposit
    int w = 0 ;// Withdraw
    int b = 10000 ;//  Balance
    int n = 0 ;

    scanf ("%d" ,&n);

    switch (n) {

        case 1 :
            printf (" \t \t \t \t Your choice :Diposit Money\n  ");
            printf ("\n \t \t \t \t Enter amount to deposit :");
            scanf ("%d" ,&d);
            b = b + d;
            printf (" \t \t Dear Customer , your have successfully Deposited the Rs.%d \n\n",d );
            printf (" \t \t \t \t Your balance is : %d \n \n ",b);
            printf (" \t \t \t \t Thank you Using ATM ! \n \n");
            break ;

        case 2 :
            printf (" \t \t \t \t Your choice :Withdraw Money \n \n");
            printf (" \t \t \t \t Enter amount to Withdraw : ");
            scanf ("%d" ,&w);
            if (w < b){
                    printf (" \n \t \t \t \t your have successfully Withdraw \n",w);
                    b = b - w;
                    printf (" \n \t \t \t \t Your balance is : %d\n \n",b);
                    printf (" \n \t \t \t \t Thank you Using ATM !\n \n");
            }
            else {
                printf (" \n \n \t \t \t \t Your balance is Insufficient to withdraw that amount of money \n \n ");
                printf (" \t \t \t \t Your balance is : %d \n \n",b);
                printf (" \t \t \t \t Thank you Using ATM ! \n \n");
            }
            break ;

        case 3 :

            printf (" \t \t \t \t Your balance is : %d \n \n",b);
            printf (" \t \t \t \t Thank you Using ATM ! \n \n");
            break ;
        }
   return 0;
}
