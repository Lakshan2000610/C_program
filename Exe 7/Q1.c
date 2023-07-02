#include <stdio.h>
#include <stdlib.h>

/*
Fundamentals of Programming -ITC 1063
Laboratory Exercise 7
Name-Malwenna hewalage pumuditha lakshan
Index number- ICT/20/879
 */

 //e Greatest Common Divisor (GCD) of two (02) integer numbers using recursion
int main()
{
    int n1, n2, i, gcd;

    printf("Enter your two integer numbers: ");
    scanf("%d %d", &n1, &n2);

    for(i=2; i <= n1 && i <= n2; i++)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("The Greatest Common Divisor (GCD) of two numbers is: %d", gcd);

    return 0;
}



