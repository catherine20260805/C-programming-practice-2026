/*Practice6.20,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter a value from 1 to 4:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Spring\n");
			break;
		case 2:
			printf("Summer\n");
			break;
		case 3:
			printf("Autumn\n");
			break;
		case 4:
			printf("Winter\n");
			break;
		default:
			printf("Invalid input.\n");
	}
		
	
	system("pause");
	return 0;
}
