/*Practice6.17,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float num;
	printf("Please enter your weight:");
	scanf("%f",&num);
	
	num>90 ? printf("You are overweight\n") : printf("You are not overweight.\n");

	system("pause");
	return 0;
}

/* Outcome
Please enter your weight:55
You are not overweight

Press any key to continue . . .

*/