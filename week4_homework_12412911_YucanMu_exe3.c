#include <stdio.h.>

int main()
{
	double q,m,n;
	printf("Please enter the amount of water, in quarts \n");
	scanf("%d",&q);
	n = q * 950 ;
	m = n /  (3.0e-23);
	printf("The number of water molecules is %e",m);
	return 0;
	
 } 
