/*Practice7.14,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n=3000,i=0;	
	
	while(n>5)
	{
		n=n-(n/2);
		i++;
	}
	printf("%d\n",i);
	
	
	system("pause");
	return 0;
}
/* Outcome
10
Press any key to continue . . .

*/