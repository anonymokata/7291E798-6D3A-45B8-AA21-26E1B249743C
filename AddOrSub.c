#include<stdio.h>

int Add(int RomanToDecimalNo1,int RomanToDecimalNo2)
{
	return RomanToDecimalNo1 + RomanToDecimalNo2;
}

int Sub(int RomanToDecimalNo1,int RomanToDecimalNo2)
{
	if(RomanToDecimalNo1 < RomanToDecimalNo2)
		return RomanToDecimalNo2 - RomanToDecimalNo1;
	else
		return RomanToDecimalNo1 - RomanToDecimalNo2;
}
