#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *DecimalToRoman(int decimal)
{
	static int i=0,n=20;
	static char *ones[] = {"1","I","II","III","IV","V"};
	char *RomanNo;
	RomanNo = malloc(n);
	strcat(RomanNo, ones[decimal]);
	i = i + strlen(ones[decimal]);
	RomanNo[i] = '\0';
	return RomanNo;
}