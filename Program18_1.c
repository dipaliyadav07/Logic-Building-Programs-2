// Logic Building - Assignment 18
// Question 1
// Accept number from user and display below pattern
// Input :  5
// Output : A   B   C   D   E

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 65+iNo;

    for(iCnt = 65; iCnt < ch; iCnt++)
    {
        printf("%c\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}