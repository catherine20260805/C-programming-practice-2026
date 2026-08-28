/*Practice6.7,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=6,b=7,c=8;
	
	if(a+b>c && a+c>b && b+c>a)
		printf("The three sides can form a triangle.\n");
	else
		printf("The three sides cannot form a triangle.\n");	
	
	system("pause");
	return 0;
}

/* Outcome
The three sides can form a triangle.


Press any key to continue . . .

*/