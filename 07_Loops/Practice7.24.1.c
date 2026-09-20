/*Practice7.24.1,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,i,count=1;

	while(count<=3)
	{
		printf("Please enter a positive integer:");
		scanf("%d",&a);
		while(a<1 || a>50)
		{
			printf("Please enter a positive integer:");
			scanf("%d",&a);
		}
		
		i=1;
		while(i<=a)
		{
			printf("* ");
			i++;
		}
		printf("\n");
		count++;
	}

	
	system("pause");
	return 0;
}

