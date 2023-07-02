#include <stdio.h>
#include <stdlib.h>

/*
Name : Malwenna hevalage pumuditha lakshan
Index Number : ICT/20/879
Lab Excercise 6
Question 03
*/


int main()

{
    while (1){
    printf ("\n \n \n");
    printf("\t \t \t \t Select one of the options do you want! \n\n");

   // MENU
//1. Add
//2. Subtract
//3. Multiply
//4. Divide
//5. Modulus

    printf ("\t  MENU \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Modulus");

     printf (" \n \t \t \t \t Enter your choice: ");

     int n = 0 ;

    scanf ("%d" ,&n);

    switch (n) {

        case 1 :
            Add  ( );
             break ;

        case 2 :
            Subtract ( );
            break ;

        case 3 :
            Multiply  ( );
             break ;

        case 4 :
            Divide ( );
            break ;

        case 5 :
            Modulus ( );
            break ;

	default:
            printf("Your choice is invalid\n");
            break;
    }
}
    return 0;
}

 int Add () {
    printf ("Enter your Fist numbers: ");
    int x ;
    int y ;
    int v ; // value
    scanf ("%d",&x);
    printf ("Enter your second numbers: ");
    scanf ("%d",&y);
    v = (x + y);
    printf ("Result: %d",v);

     return 0;
 }

  int Subtract () {
    printf ("Enter your Fist numbers: ");
    int x ;
    int y ;
    int v ; // value
    scanf ("%d",&x);
    printf ("Enter your second numbers: ");
    scanf ("%d ",&y);
    v = (x - y );
    printf ("Result: %d",v);

     return 0;
 }

  int Multiply () {
    printf ("Enter your Fist numbers: ");
    int x ;
    int y ;
    int v ; // value
    scanf ("%d",&x);
    printf ("Enter your second numbers: ");
    scanf ("%d",&y);
    v = (x * y );
    printf ("Result: %d",v);

     return 0;
 }

  int Divide () {
    printf ("Enter your Fist numbers: ");
    int x ;
    int y ;
    int v ; // value
    scanf ("%d",&x);
    printf ("Enter your second numbers: ");
    scanf ("%d",&y);
    v = (x / y ) ;
    printf ("Result: %d",v);

     return 0;
 }

  int Modulus () {
    printf ("Enter your Fist numbers: ");
    int x ;
    int y ;
    int v ; // value
    scanf ("%d",&x);
    printf ("Enter your second numbers: ");
    scanf ("%d",&y);
    v = (x % y ) ;
    printf ("Result: %d",v);

     return 0;
 }

