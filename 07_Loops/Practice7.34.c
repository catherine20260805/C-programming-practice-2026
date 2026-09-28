/*Practice7.34,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=1;
	
	do
	{
		i++;
	}while(i%3!=1 || i%5!=3 || i%7!=2);
	printf("%d\n",i);
			
	system("pause");
	return 0;
}
/* Outcome
58
Press any key to continue . . .

*/