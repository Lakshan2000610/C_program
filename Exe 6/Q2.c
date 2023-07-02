#include <stdio.h>
#include <stdlib.h>

/*
Name : Malwenna hevalage pumuditha lakshan
Index Number : ICT/20/879
Lab Excercise 6
Question 02
*/


int main()
{

    printf("\t \t \t \t Select one of the options do you want! \n\n");

    // 1.Celsius to Fahrenheit convert  2.fahrenheit to celsius convert
    printf ("1.celsius to fahrenheit convert \n2.fahrenheit to celsius convert \n");

    printf (" \n \t \t \t \t Your choice :  ");

    int n = 0 ;

    scanf ("%d" ,&n);

    switch (n) {

        case 1 :
            cetofa  ( );
             break ;

        case 2 :
            fatoce ( );
            break ;
	
	default:
            printf("Your choice is invalid\n");
            break;
    }
    return 0;
}

int cetofa ( ){
    printf (" \n \t \t \t \t Your choice :Celsius to Fahrenheit convert \n  ");
    printf ("Enter your Celsius value = ");
    float ctf = 0 ;
    float v ;
    scanf ("%d" ,&ctf);
     v = ( (ctf*9)/5)+32;
    printf ("\n Your fahrenheit value is ,%.3f F",v );

    return 0;


}

int fatoce ( ){
    printf (" \n \t \t \t \t Your choice :fahrenheit to celsius convert \n  ");
    printf ("Enter your fahrenheit value = ");
    float ftc = 0 ;
    float v ;
    scanf ("%d" ,&ftc);
    v = (ftc - 32)*5/9;
    printf (" \n Your celsius value is ,%.3f °C",v);

    return 0;
}

