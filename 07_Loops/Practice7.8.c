/*Practice7.8,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	printf("Numbers divisible by both 7 and 3 from 1 to 100:");
	
	for(i=1;i<=100;i++)
	{	
		if(i%7==0 && i%3==0)
			printf("%d ",i);
	}
	
	
	system("pause");
	return 0;
}

/* Outcome
Numbers divisible by both 7 and 3 from 1 to 100::21 42 63 84

Press any key to continue . . .

*/