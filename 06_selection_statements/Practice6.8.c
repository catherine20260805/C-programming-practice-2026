/*Practice6.8,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=3,b=4,c=5;
	
	
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
			printf("Right triangle.\n");
		else if(a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
				printf("Obtuse triangle.\n");
		 	else printf("Acute triangle.\n");	
	}
	else
		printf("The three sides cannot form a triangle.\n");
		
	system("pause");
	return 0;
}

/* Outcome
Right triangle.

Press any key to continue . . .

*/