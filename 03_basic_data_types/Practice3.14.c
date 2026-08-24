/*Practice3.14,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned short num1=80000;          /*overflow.*/
	unsigned int num2=80000;           /*Change short to int*/
	
	printf("before %d\n",num1); 
	printf("after %d\n",num2);      
	
	system("pause");
	return 0;
}

/* Outcome

before 14464
after 80000
Press any key to continue . . .

*/