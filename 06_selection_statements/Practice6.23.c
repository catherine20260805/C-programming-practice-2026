/*Practice6.23,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		case 2:
		case 3:
		case 4:	
		case 5:				
			printf("Today is a workday.\n");
			break;
		case 6:
		case 7:
			printf("Today is a day off.\n");
			break;
		default:
			printf("Invalid input.\n");
	}
		
	
	system("pause");
	return 0;
}
