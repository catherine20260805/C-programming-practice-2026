/*Practice7.18,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,i=1,sum=0;
	
	do
	{
		printf("Please enter a positive even number:");
		scanf("%d",&n);
	}
	while(n<=0 || n%2!=0);

	do
	{
		if(i%2==0)
			sum+=i;
		i++;	
	}
	while(i<=n);
	printf("%d\n",sum);
	
	
	system("pause");
	return 0;
}