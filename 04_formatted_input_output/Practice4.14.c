/*Practice4.14,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf("%d",&num);         
	printf("The octal representation of %d:%o\n",num,num);
	printf("The hexadecimal representation of %d:%x\n",num,num);
	
	
	system("pause");
	return 0;
}


/* Outcome(Suppose enter = 42)

Please enter an integer:42
The octal representation of 42:52
The hexadecimal representation of 42:2a
Press any key to continue . . .

*/