/*Practice7.9,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,sum=0;
	
	
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
			sum-=i*i;
		else
			sum+=i*i;			
	}
	printf("%d\n",sum);
	
	
	system("pause");
	return 0;
}

/* Outcome
-1275

Press any key to continue . . .

*/