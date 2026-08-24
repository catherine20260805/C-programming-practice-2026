/*Practice4.19,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	char ch;
	printf("Please enter an integer: ");
	scanf("%d",&num);
	fflush(stdin);
	
	printf("Please enter a character: ");
	ch=getchar();
	printf("num=%d,ASCII of ch=%d\n",num,ch);
	
	
	system("pause");
	return 0;
}


/* Outcome
Please enter an integer: 13215
Please enter a character: k
num=13215,ASCII of ch=107
Press any key to continue . . .

*/