/*Practice7.13,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,i=1,sum=0;
	printf("Please enter a positive even number:");
	scanf("%d",&n);
	
	while(n<=0 || n%2!=0)
	{
		printf("Please enter a positive even number:");
		scanf("%d",&n);
	}
	while(i<=n)
	{
		if(i%2==0)
			sum+=i;
		i++;
	}
	printf("%d\n",sum);
	
	
	system("pause");
	return 0;
}
