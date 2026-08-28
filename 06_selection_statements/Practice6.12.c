/*Practice6.12,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int s;
	
	printf("Please enter the score:");
	scanf("%d",&s);
		
	if(s>=80 && s<=100)
		printf("Grade:A\n");
	else if(s>=60 && s<=79)
			printf("Grade:B\n");
		else if(s>=0 && s<=59)
				printf("Grade:C\n");
					
					
	system("pause");
	return 0;
}


/* Outcome
Please enter the score:56
Grade:C

Press any key to continue . . .

*/