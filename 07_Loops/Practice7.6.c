/*Practice7.6,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,n;
	
	printf("Please enter a number:");
	scanf("%d",&n);
	printf("The factors of %d:",n);
	
	for(i=1;i<=n;i++)
	{	
		if(n%i==0)
			printf("%d ",i);
	}
	
	
	system("pause");
	return 0;
}

