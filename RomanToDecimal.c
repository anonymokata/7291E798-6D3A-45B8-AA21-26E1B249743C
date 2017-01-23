#include<stdio.h>

int RomanToDecimal(char RomanNo[])
{
	int i = 0, DecimalNo = 0;

	switch(RomanNo[i])
	{
		case 'I':
			return 1;
			break;
		case 'V':
			return 5;
			break;
		default:
			return 0;
			break;
	}
}
