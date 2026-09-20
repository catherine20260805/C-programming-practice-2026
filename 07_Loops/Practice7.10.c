/*Practice7.10,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,n;
	float sum=0;
	printf("Please enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=(float)1/(float)i;			
	}
	printf("%.3f\n",sum);
	
	
	system("pause");
	return 0;
}

