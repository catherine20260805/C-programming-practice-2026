/*Practice4.12,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str1[10],str2[20];
	printf("Please enter your last name:");
	scanf("%s",&str1);         
	printf("Please enter your first name:");
	scanf("%s",&str2);
	printf("%s %s\n",str2,str1);
	
	system("pause");
	return 0;
}


/* Outcome(Suppose last name = Leonardo and first name = DiCaprio.)

Please enter your last name:Leonardo
Please enter your first name:DiCaprio
DiCaprio Leonardo
Press any key to continue . . .

*/