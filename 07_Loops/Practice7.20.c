/*Practice7.20,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,i,count=1;

	do
	{
		do
		{
			printf("Please enter a positive integer:");
			scanf("%d",&a);
		}while(a<1 || a>50);
		count++;
		i=1;
		do
		{
			printf("* ");
			i++;
		}while(i<=a);
		printf("\n");	
	}while(count<=3);
	
	
	system("pause");
	return 0;
}

/* Outcome
45
Press any key to continue . . .

*/