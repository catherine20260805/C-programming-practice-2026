/*Practice6.18,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float high,weight;
	printf("Please enter your weight:");
	scanf("%f",&weight);
	printf("Please enter your high:");
	scanf("%f",&high);
	
	weight>90 && high<180 ?	printf("You are overweight\n") : printf("You are not overweight.\n");
		
	
	system("pause");
	return 0;
}

/* Outcome
Please enter your weight:99
Please enter your high:165
You are overweight

Please enter your weight:99
Please enter your high:182
You are not overweight.

Please enter your weight:65
Please enter your high:165
You are not overweight.

Please enter your weight:65
Please enter your high:182
You are not overweight.

Press any key to continue . . .

*/