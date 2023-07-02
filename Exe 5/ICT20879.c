#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 01.alculate the sum of the numbers in the range from 0 to that number.

    int n = 0;
    int total = 0 ;
    printf ("Enter a positive integer:");
    scanf ("%d",&n);
    printf ("\n");
    if (0 <= n){
        for(int i =0 ; i <= n ;i++){
            total = total+ i;
      }
       printf ("The Sum of range 0 - %d is:%d",n,total);

    }
    else {
        printf ("Enter positive integer");
    }

    printf ("\n\n \n");

    //02.factorial

    int f = 0;
    int m = 1 ;
    printf ("Enter a positive integer:");
    scanf ("%d",&f);
    printf ("\n");

    if (0 <= f){
        for(int i =1 ; i <= f ;i++){
            m = m * i;

       }
      printf ("The factorial of %d is:%d",f,m);

    }

    else {
        printf ("Enter positive integer");
    }
  printf ("\n\n \n");

  // 03.prime number.

  int p, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &p);

    for (i = 2; i <= p / 2; ++i) {
    // condition for non-prime
    if (p % i == 0) {
      flag = 1;
      break;
    }
  }

  if (p == 1) {
    printf("1 is neither prime nor composite.");
  }
  else {
    if (flag == 0)
      printf("%d is a prime number.", p);
    else
      printf("%d is not a prime number.", p);
  }
    return 0;
}
