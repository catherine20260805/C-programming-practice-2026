/*Practice6.10,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float x,y;
	
	printf("Please enter the x-coordinate:");
	scanf("%f",&x);
	printf("Please enter the y-coordinate:");
	scanf("%f",&y);
		
	if(x==0 && y==0)
		printf("The origin\n");
	else if(x>0 && y>0)
			printf("The first quadrant\n");
		else if(x>0 && y<0)
				printf("The fourth quadrant\n");
			else if(x<0 && y<0)
					printf("The third quadrant\n");
				else if(x<0 && y>0)
						printf("The second quadrant\n");
					else if(x==0)
							printf("y-axis\n");
						else if(y==0)
								printf("x-axis\n");			
					
	system("pause");
	return 0;
}

/* Outcome
Please enter the x-coordinate:-6.3
Please enter the y-coordinate:4.5
The second quadrant
Press any key to continue . . .

*/