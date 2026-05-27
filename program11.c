/*
    Start
        Accept number as No
        If No is completely divisible by 2
            print Even
        otherwise
            print odd
    Stop


    Start
        Accept number as No
        Divide No ny 2
        If remainder is zero
            print Even
        other wise
            print odd
    Stop
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRemainder = iValue%2;

    if (iRemainder == 0)
    {
        printf("Number is even:\n");
    }
    else 
    {
        printf("Number is odd\n");
    }

    return 0;
}