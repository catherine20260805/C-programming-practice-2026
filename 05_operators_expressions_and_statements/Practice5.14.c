/*Practice5.14,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float k;
	printf("Please enter the kilometers:");
	scanf("%f",&k);
	printf("%f kilometers is %f miles.\n",k,k/1.6);		
	system("pause");
	return 0;
}


/* Outcome
Please enter the kilometers:100
100.000000 kilometers is 62.500000 miles.
Press any key to continue . . .

*/