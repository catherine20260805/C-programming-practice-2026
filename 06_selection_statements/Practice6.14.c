/*Practice6.14,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int y;
	
	printf("Please enter the year:");
	scanf("%d",&y);
		
	if(y%400==0)
		printf("It is a leap year.\n");
	else if(y%100==0)
			printf("Not a leap year.\n");
		else if(y%4==0)
				printf("It is a leap year.\n");
	else
		printf("Not a leap year.\n");	
	
	system("pause");
	return 0;
}


/* Outcome
Please enter the year:1900
Not a leap year.

Press any key to continue . . .

*/