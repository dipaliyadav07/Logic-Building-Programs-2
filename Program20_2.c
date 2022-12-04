// Logic Building - Assignment 20
// Question 2
// Accept number of rows and number of columns from user and display below pattern
// Input :  iRow = 4    iCol = 4
// Output : A   B   C   D
//          a   b   c   d
//          A   B   C   D
//          a   b   c   d

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i==2) || (i==iRow))
            {
                printf("%c\t",(j+96));
            }
            else
            {
                printf("%c\t",(j+64));
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}