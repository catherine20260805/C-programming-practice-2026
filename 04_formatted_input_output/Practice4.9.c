/*Practice4.9,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	scanf("%d",&num);         /*Here, num does not point to a valid memory address. You need to add & before num.*/
	printf("num=%d\n",num);
	
	system("pause");
	return 0;
}


/* Outcome(Suppose the input is 10.)

10
num=10
Press any key to continue . . .

*/