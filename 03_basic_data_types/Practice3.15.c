/*Practice3.15,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float num1=30000.1F;
	float num2=0.0004F;    
	printf("before %f\n",num1+num2);          /*float cannot represent all decimal numbers exactly; it can only store an approximate value.*/
	
	double num3=30000.1;              /*Change float to double*/ 
	double num4=0.0004;     
	printf("after %f\n",num3+num4);
	
	system("pause");
	return 0;
}


/* Outcome

before 30000.099609
after 30000.100400
Press any key to continue . . .

*/