/*Practice6.2,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf("%d",&num);
	
	if(num>0)
		printf("The integer you entered is greater than 0.\n");
	if(num==0)
		printf("The integer you entered is equal to 0.\n");
	if(num<0)
		printf("The integer you entered is less than 0.\n");
	
	system("pause");
	return 0;
}

/* Outcome
Please enter an integer:9
The integer you entered is greater than 0.

Please enter an integer:0
The integer you entered is equal to 0.

Please enter an integer:-3
The integer you entered is less than 0.

Press any key to continue . . .

*/