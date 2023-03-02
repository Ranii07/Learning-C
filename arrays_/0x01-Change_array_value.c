#include <stdio.h>

int main()
{
    int myNumbers[] = {12,10,50,70,90};
    myNumbers[0] = 50; //changes the first number to from 12 to 50
    printf("The new first digit is: %d\n", myNumbers[0]);

    return 0;
}