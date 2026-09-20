/*Practice7.5,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,sum=0;
	
	for(i=1;i<=100;i++)
	{	
		if(i%3==0 && i%8==0)
			sum+=i;
	}
	printf("%d\n",sum);
	
	system("pause");
	return 0;
}

/* Outcome
240

Press any key to continue . . .

*/