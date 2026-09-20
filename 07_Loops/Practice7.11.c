/*Practice7.11,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,sum=0;
	printf("All perfect numbers within 1000:");
	
	for(i=1;i<=1000;i++)
	{	
		for(j=1;j<i;j++)
			if(i%j==0)
				sum+=j;
		if(sum==i)
			printf("%d ",i);
		sum=0;			
	}
	
	
	system("pause");
	return 0;
}

/* Outcome
All perfect numbers within 1000:6 28 496

Press any key to continue . . .

*/