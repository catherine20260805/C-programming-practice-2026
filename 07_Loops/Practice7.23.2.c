/*Practice7.23.2,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=1,sum=0;

	while(sum<=1000)
	{
		sum+=i;
		i++;
	}
	
	
	printf("%d\n",i-1);
	
	
	system("pause");
	return 0;
}

/* Outcome
45
Press any key to continue . . .

*/