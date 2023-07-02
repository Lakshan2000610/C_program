#include <stdio.h>
#include <stdlib.h>

int main()
{
float t ; // Total

    int price[6] ;
    int item[6] ;
    int amount[6] ;

    for (int i = 0 ; i < 5 ; i++ ){
            printf ("Enter unit price : ");
            scanf ("%d",&price[i]);
            printf("\n");
            printf ("Enter number of Items :");
            scanf ("%d",&item[i]);
            printf("\n");

    }

    for (int i = 0; i<5 ; i++){
       amount[i] = item[i] * price[i] ;

       }
printf ("\n");
    printf (" Unit Price\t Number Of Items\t Amount \n");
    printf ("----------\t ---------------\t ------- \n");

for (int i = 0; i<5 ; i++){
      t += amount[i];



      printf ("  %d \t\t\t",price[i]);
      printf ("%d \t\t  ",item[i]);
      printf ("%d \n",amount[i]);

       }
printf ("\n");
printf ("..........\t ...............\t ....... \n");
       printf ("Total :%.2f",t);

   return 0;
}
