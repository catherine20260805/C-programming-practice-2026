/*Practice7.31,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0 || i%3!=0 || i%12==0)
			continue;
		printf("%d\n",i);
	}
			
	system("pause");
	return 0;

}
/* Outcome
6
18
30
42
54
66
78
90
Press any key to continue . . .

*/