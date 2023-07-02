#include <stdio.h>
#include <stdlib.h>

int x ; // total Marks
int marks [10]; //array
int a ; // average

int main()
{
    for(int i =1 ; i<= 10 ; ++i){

            printf ("Enter marks of student %d: ",i);
            scanf("%d",&marks[i]);

    }
    printf ("\n");
    printf ("-------------------------------------------------------------------------- \n");

     printf ("Student Marks :");
    for (int i=1 ; i<=10 ; i++){
       printf ("%d ,",marks [i]);
       x += marks [i] ;
    }
     printf ("\n");
    printf ("\n The average of the student marks is = %d",a = x/10);
    return 0;
}
