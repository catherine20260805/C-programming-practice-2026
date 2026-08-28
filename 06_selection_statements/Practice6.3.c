/*Practice6.3,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf("%d",&num);
	
	if(num%2!=0)
		printf("%d is an odd number.\n",num);
	if(num%2==0)
		printf("%d is an even number.\n",num);
	
	system("pause");
	return 0;
}

/* Outcome
Please enter an integer:5
5 is an odd number.

Please enter an integer:66
66 is an even number.

Press any key to continue . . .

*/