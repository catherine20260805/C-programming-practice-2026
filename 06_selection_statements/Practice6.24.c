/*Practice6.24,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=0,sum=0;
	start:
		i++;
		if(i > 100)
        goto end;
        
		if(i%2!=0)
			sum+=i;
		goto start;
	
	
	end:
		printf("The sum of odd numbers %d\n",sum);
		
	system("pause");
	return 0;
}

/* Outcome
The sum of odd numbers 2500

Press any key to continue . . .

*/