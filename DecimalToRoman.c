#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *DecimalToRoman(int decimal)
{
	static int i=0,n=20,value=0;
	static char *hundreds[] = {"1","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	static char *tens[] = {"1","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	static char *ones[] = {"1","I","II","III","IV","V","VI","VII","VIII","IX"};
	char *RomanNo;
	RomanNo = malloc(n);
	while(decimal >= 1000)
	{
		RomanNo[i] = 'M';
		decimal -= 1000;
		i++;		
	}	
	if(decimal >= 100) 
	{
		value = decimal - (decimal%100);	
		strcat(RomanNo, hundreds[value/100]);
		i = i + strlen(hundreds[value/100]);
		decimal -= value;
	}
	if(decimal >= 10)
	{
		value = decimal - (decimal%10);		
		strcat(RomanNo, tens[value/10]);
		i = i + strlen(tens[value/10]);
		decimal -= value; 
	}
	if(decimal >= 1)
	{
		strcat(RomanNo, ones[decimal]);
		i = i + strlen(ones[decimal]);
	}
	RomanNo[i] = '\0';
	return RomanNo;
}
