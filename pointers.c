#include <stdio.h>

void main()
{
    int a =10, b = 12;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Value of a is: %d \n", a); // prints value of a 
    printf("Value of a is: %d\n", *p); // prints value of a using the pointer *p 

    printf("Adress of a is:% \n", &a); //prints address of a 
}