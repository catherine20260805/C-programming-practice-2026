/*Practice6.16,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	double a=1,b=-6,c=9;
		
	if(b*b-4*a*c>0)
		printf("x=%.2f,%.2f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	else if(b*b-4*a*c==0)	
		printf("x=%.2f\n",-b/(2*a));
		else if(b*b-4*a*c<0)	
				printf("No real roots.\n");
	system("pause");
	return 0;
}


/* Outcome
x=3.00

Press any key to continue . . .

*/