/*Practice6.22,Hands-on Practice*/
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
		case 'A':
			printf("The character you entered is A.\n");
			break;
		case 'b':
		case 'B':
			printf("The character you entered is B.\n");
			break;
		default:
			printf("The character you entered is neither A nor B.\n");
	}
		
	
	system("pause");
	return 0;
}
