/*Practice6.19,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=4,b=6,larger;
	
	a>b ? (larger=a): (larger=b);
	printf("%d is greater.\n",larger);
	
	system("pause");
	return 0;
}

/* Outcome
6 is greater.
Press any key to continue . . .

*/