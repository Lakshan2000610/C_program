#include <stdio.h>
#include <stdlib.h>


int main()
{
   int marks[5][2];// 2D array

    for (int i = 0 ; i < 5 ; i++ ){
            printf ("Enter index : ");
            scanf("%d",&marks[i][0]);
            printf("\n");
            printf ("Enter marks : ");
            scanf("%d",&marks[i][1]);
            printf("\n");

    }
        printf ("\n");

    printf("Students who passed the examination \n \n");

    for (int i = 0 ; i < 5 ;i++){

        if (marks[i][1] >= 35){

            printf("%d,",marks[i][0]);

         }

  }
    printf ("\n \n");
    printf("Students who Failed the examination: \n \n");

    for(int i=0;i<5;i++)
    {
        if(marks[i][1]<35)
        {
            printf("%d,",marks[i][0]);
        }
    }


return 0;
}
