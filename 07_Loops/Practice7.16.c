/*Practice7.16,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	char ch;
	while(ch!=17 && ch!=3)
	{
		ch=getch();
		printf("ASCII of ch=%d\n",ch);
	}
	printf("You pressed Ctrl+Q or Ctrl+C.\n");
	
	system("pause");
	return 0;
}
