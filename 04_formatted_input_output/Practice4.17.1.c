/*Practice4.17.1,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch1,ch2;
	
	printf("Please enter the first character:");
	scanf("%c",&ch1);         
	printf("Please enter the second character:");
	scanf(" %c",&ch2);
	printf("ch1=%c,ch2=%c\n",ch1,ch2);  
	
	
	system("pause");
	return 0;
}


/* Outcome

Please enter the first character:q
Please enter the second character:w
ch1=q,ch2=w
Press any key to continue . . .

*/