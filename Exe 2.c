#include <stdio.h>
#include <stdlib.h>

int main()
{

    int indexNumber = 20879 ;
    char bloodType = 'B';
    float weight = 62.6;
    float height = 169.5;

    printf("Body Condition details of Index Number %d \n",indexNumber);
    printf("Blood Type:%c \n",bloodType);
    printf("Weight: %.2f \n",weight);
    printf("Height: %.2f \n",height);

    printf("\n \n");


//The formula for calculating the volume of a sphere is:

    float r;
    float total;

    printf("Enter your r number: ");
    scanf("%f", &r);

    total = ( 4*3.14*r*r*r)/3 ;

    printf ("Enter Radius of the sphere:%f\n",r);
    printf("The volume of the sphere is: %.2f\n", total);



    return 0;
}
