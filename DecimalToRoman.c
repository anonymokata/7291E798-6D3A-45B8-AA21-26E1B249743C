#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *DecimalToRoman(int decimal)
{
	static int i=0,n=20;
	//static int value;
	char *RomanNo;
	RomanNo = malloc(n);
	if(decimal == 1)
	{
		RomanNo[i] = 'I';
	}
	RomanNo[i+1] = '\0';
	return RomanNo;
}
