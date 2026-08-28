/*Practice6.5,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float num;
	printf("Please enter your weight:");
	scanf("%f",&num);
	
	if(num>90)
		printf("You are overweight\n");
	else
		printf("You are not overweight.\n");	
	
	system("pause");
	return 0;
}

/* Outcome
Please enter your weight:100
You are overweight

Please enter your weight:65.8
You are not overweight.

Press any key to continue . . .

*/