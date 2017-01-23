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
		case 'X':
			return 10;
			break;
		case 'L':
			return 50;
			break;
		case 'C':
			return 100;
			break;
		default:
			return 0;
			break;
	}
}
