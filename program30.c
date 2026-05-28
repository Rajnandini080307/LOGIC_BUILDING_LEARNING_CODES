#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    //filter
    if(iNo<0)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt=1 ; iCnt <=iNo ; iCnt++)
    {
        printf("JAY GANESH...\n");
    }
}

int main()
{
    int iValue=0;
    
    printf("Enter the Frequency: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}