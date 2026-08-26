/*Practice5.11,Hands-on Practice*/
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(void)
{
	float c;
	printf("Please enter the Celsius temperature:");
	scanf("%f",&c);
	printf("The Fahrenheit temperature is:%f\n",((float)9/5)*c+32);
		
	system("pause");
	return 0;
}


/* Outcome
Please enter the Celsius temperature:36.5
The Fahrenheit temperature is:97.699997
Press any key to continue . . .

*/