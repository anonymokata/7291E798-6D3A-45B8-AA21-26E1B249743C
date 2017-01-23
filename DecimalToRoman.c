#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *DecimalToRoman(int decimal)
{
	static int i=0,n=20;
	static char *tens[] = {"1","X","XX","XXX","XL","L","LX"};
	static char *ones[] = {"1","I","II","III","IV","V","VI","VII","VIII","IX"};
	char *RomanNo;
	RomanNo = malloc(n);
	if(decimal >= 10)
	{
		strcat(RomanNo, tens[decimal/10]);
		i = i + strlen(tens[decimal/10]);
	}
	else
	{
		strcat(RomanNo, ones[decimal]);
		i = i + strlen(ones[decimal]);
	}
	RomanNo[i] = '\0';
	return RomanNo;
}
