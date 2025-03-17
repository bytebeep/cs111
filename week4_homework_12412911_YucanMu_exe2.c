#include <stdio.h>

int main()
{
	int a;
	do 
	{
	
	printf("Please enter an ASCII code value \n");
	scanf("%d",&a);
}while (a <32 ||a > 127); 
printf("The character is £º %c\n",(char)a);
return 0;
	
}
