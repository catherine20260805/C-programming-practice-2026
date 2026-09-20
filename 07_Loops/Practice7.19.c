/*Practice7.19,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=1,sum=0;

	do
	{
		sum+=i;
		i++;	
	}
	while(sum<1000);
	
	printf("%d\n",i-1);
	
	
	system("pause");
	return 0;
}

/* Outcome
45
Press any key to continue . . .

*/