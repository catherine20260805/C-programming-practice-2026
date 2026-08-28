/*Practice6.1,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	printf("Please enter a character:");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
		printf("This character is a digit.\n");
	if(ch>='a' && ch<='z')
		printf("This character is an English letter.\n");
	if(ch>='A' && ch<='Z')
		printf("This character is an English letter.\n");
	
	system("pause");
	return 0;
}


/* Outcome
Please enter a character:9
This character is a digit.

Please enter a character:a
This character is an English letter.

Please enter a character:A
This character is an English letter.

Press any key to continue . . .

*/