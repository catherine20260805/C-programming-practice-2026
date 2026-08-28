/*Practice6.4,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf("%d",&num);
	
	if(num>0)
		printf("The absolute value of %d is %d.\n",num,num);
	if(num<0)
		printf("The absolute value of %d is %d.\n",num,abs(num));
	
	system("pause");
	return 0;
}

/* Outcome
Please enter an integer:9
The absolute value of 9 is 9.

Please enter an integer:-5
The absolute value of -5 is 5.

Press any key to continue . . .

*/