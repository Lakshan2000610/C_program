#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, lcm = 1;

    printf("Enter your two integer numbers: ");
    scanf("%d %d", &n1, &n2);

    for(i=2; i <= n1 || i <= n2; i++)
    {

        for(int x = i; n1%x==0 || n2%x==0 ; x++){

             lcm *= x;

             if (n1%x==0){
                    n1 /=x ;
             }

             if (n2%x==0){
                    n2 /=x ;
             }

        }

    }

     printf(" The Least Common Multiple (LCM) of two numbers is: %d ", lcm);



    return 0;
}

