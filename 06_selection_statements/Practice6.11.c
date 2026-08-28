/*Practice6.11,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int hr=80;
	
	if(hr<=60)
		printf("Salary:%d\n",hr*75);
	else if(hr>=61 && hr<=75)
			printf("Salary:%.3f\n",60*75+((float)hr-60)*75*1.25);
		else if(hr>=76)
				printf("Salary:%.3f\n",60*75+15*75*1.25+((float)hr-75)*75*1.75);
	
	system("pause");
	return 0;
}

/* Outcome
Salary:6562.500

Press any key to continue . . .

*/