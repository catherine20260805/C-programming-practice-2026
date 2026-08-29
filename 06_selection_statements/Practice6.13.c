/*Practice6.13,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int m;
	
	printf("Please enter the month:");
	scanf("%d",&m);
		
	if(m>=3 && m<=5)
		printf("Spring\n");
	else if(m>=6 && m<=8)
			printf("Summer\n");
		else if(m>=9 && m<=11)
				printf("Autumn\n");
			else if(m==12 || m>=1 && m<=2)
					printf("Winter\n");
					
	system("pause");
	return 0;
}


/* Outcome
Please enter the month:5
Spring

Press any key to continue . . .

*/