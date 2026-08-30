/*Practice6.26,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	start:
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
				printf("Please enter again.\n");
				goto start;
		}
		
	
	system("pause");
	return 0;
}