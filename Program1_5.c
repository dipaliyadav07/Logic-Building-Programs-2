// Logic Building - Assignment 1
// Question 5
// Accept one number from user and print that number of * on screen

#include<stdio.h>

void Accept(int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("*");
	}
}


int main()
{
	int iValue = 0;
	iValue = 5;

	Accept(iValue);

	return 0;
}