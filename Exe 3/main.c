#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,d1,d2,d3,d4;
    printf ("Enter  :");
    scanf ("%d", &num);
    d1 =num %10 ;
    d2 = num %100/10;
    d3 = num %1000/100;
    d4 = num %10000/1000;
    printf ("%d\n",d1);
    printf ("%d\n",d2);
    printf ("%d\n",d3);
    printf ("%d\n",d4);
    return 0;
}
