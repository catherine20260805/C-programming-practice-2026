/*Practice5.16,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double r;
	printf("Please enter the radius:");
	scanf("%lf",&r);
	printf("The area is:%f\n",((double)4/3)*r*r*r*3.1415);
	
	system("pause");
	return 0;
}


/* Outcome
Please enter the radius:5
The area is:523.583333
Press any key to continue . . .

*/