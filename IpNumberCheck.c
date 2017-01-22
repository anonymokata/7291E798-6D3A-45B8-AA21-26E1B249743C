#include <stdio.h>

int IpCheck(char RomanNo[])
{
	int IpNoStatus = 1, i=0;
	switch(RomanNo[i])

	{
		case 'I':
			IpNoStatus = 1;
			break;
		case 'V':
			IpNoStatus = 1;
			break;
		default:
			IpNoStatus = 0;
			break;
	}
	return IpNoStatus;
}			
