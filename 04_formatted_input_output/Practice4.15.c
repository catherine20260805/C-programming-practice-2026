/*Practice4.15,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf("%x",&num);         
	printf("The octal representation of %x:%o\n",num,num);
	printf("The decimal representation of %x:%d\n",num,num);
	
	
	system("pause");
	return 0;
}


/* Outcome(Suppose enter = 2a)

Please enter an integer:2a
The octal representation of 2a:52
The decimal representation of 2a:42
Press any key to continue . . .

*/