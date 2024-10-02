#include <stdio.h>
int main()
{
	int n = 12349;
	int ld1,ld2,ld3,ld4,ld5;
	ld1 = n%10;
	if(ld1 != 9) ld1 = n%10;
	else if (ld1 == 9) ld1 = -1;
	n = n/10;
	ld2 = n%10;
	if(ld2 != 9) ld2 = n%10;
	else if (ld2 == 9) ld2 = -1;
	n = n/10;
	ld3 = n%10;
	if(ld3 != 9) ld3 = n%10;
	else if (ld3 == 9) ld3 = -1;
	n = n/10;
	ld4 = n%10;
	if(ld4 != 9) ld4 = n%10;
    else if (ld4 == 9) ld4 = -1;
	n=n/10;
	ld5 = n%10;
	if(ld5 != 9) ld5 = n%10;
    else if (ld5 == 9) ld5 = -1;
	ld1 = ld1+1;
	ld2 = ld2+1;
	ld3 = ld3+1;
	ld4=ld4+1;
	ld5 = ld5+1;
	printf("%d%d%d%d%d",ld5,ld4,ld3,ld2,ld1);
	return 0;
}