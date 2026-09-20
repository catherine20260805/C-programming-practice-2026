/*Practice7.7,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	printf("Numbers divisible by 6 from 1 to 100:");
	
	for(i=1;i<=100;i++)
	{	
		if(i%6==0)
			printf("%d ",i);
	}
	
	
	system("pause");
	return 0;
}

/* Outcome
Numbers divisible by 6 from 1 to 100:6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96

Press any key to continue . . .

*/