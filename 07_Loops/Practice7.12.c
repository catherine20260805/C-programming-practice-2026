/*Practice7.12,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,a,b,c,sum=0;
	printf("Armstrong number:\n");
	
	for(i=100;i<1000;i++)
	{	
		a=i/100;
		b=i%100;
		
		c=b%10;
		b=b/10;
		
		sum=a*a*a+b*b*b+c*c*c;
		if(sum==i)
			printf("%d\n",i);	
	}
	
	
	system("pause");
	return 0;
}

/* Outcome
Armstrong number:
153
370
371
407
Press any key to continue . . .

*/