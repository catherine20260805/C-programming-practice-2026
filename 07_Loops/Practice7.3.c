/*Practice7.3,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,n,sum=0;
	
	printf("Please enter an odd number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		sum+=i;
	}
	printf("1+2+...+%d=%d\n",n,sum);
	
	system("pause");
	return 0;
}

