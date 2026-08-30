/*Practice6.21,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	printf("Please enter a character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("lowercase a\n");
			break;
		case 'b':
			printf("lowercase b\n");
			break;
		default:
			printf("The character you entered is neither a nor b.\n");
	}
		
	
	system("pause");
	return 0;
}

