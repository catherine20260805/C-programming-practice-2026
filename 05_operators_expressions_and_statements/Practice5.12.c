/*Practice5.12,Hands-on Practice*/
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(void)
{
	float f;
	printf("Please enter the Fahrenheit temperature:");
	scanf("%f",&f);
	printf("%f Fahrenheit is %f Celsius\n",f,(f-32)/((float)9/5));
		
	system("pause");
	return 0;
}


/* Outcome
Please enter the Fahrenheit temperature:97.7
97.699997 Fahrenheit is 36.500000 Celsius
Press any key to continue . . .

*/