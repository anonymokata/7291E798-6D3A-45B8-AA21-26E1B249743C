#include<stdio.h>
#include<string.h>

static int GetDecimal(char RNo)
{
	switch(RNo)
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
		case 'D':
			return 500;
			break;
		case 'M':
			return 1000;
			break;
		default:
			return 0;
			break;
	}	

}
int RomanToDecimal(char RomanNo[])
{
	int i = 0, DecimalNo = 0;
	int length = strlen(RomanNo);
	for(i = 0; i<length; i++)
	{
		DecimalNo += GetDecimal(RomanNo[i]);
	}
	return DecimalNo;
}
