/*Practice4.20,Hands-on Practice*/
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	
	printf("Please enter a character: ");
	ch=getche();
	putchar(ch);
	putchar('\n');
	
	printf("Please enter a character: ");
	ch=getch();
	putchar(ch);
	putchar('\n');
	
	system("pause");
	return 0;
}


/* Outcome
Please enter a character: 88
Please enter a character: 9
Press any key to continue . . .

*/