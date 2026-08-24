/*Practice4.10,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1,num2;
	printf("Please enter the first integer:");
	scanf("%d",&num1);         
	printf("Please enter the second integer.:");
	scanf("%d",&num2);
	printf("%d x %d=%d\n",num1,num2,num1*num2);
	
	system("pause");
	return 0;
}


/* Outcome(Suppose num1 = 6 and num = 8.)

Please enter the first integer:6
Please enter the second integer.:8
6 x 8=48
Press any key to continue . . .

*/