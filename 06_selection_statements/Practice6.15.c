/*Practice6.15,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int pay1,pay2,pay3;
	
	printf("Please enter the amount payable:");
	scanf("%d",&pay1);
	printf("Please enter the actual payment amount:");
	scanf("%d",&pay2);
		
	
	if(pay1<pay2)
	{
		pay3=pay2-pay1;
		if(pay3/500>0)
			printf("Give %d 500-dollar bills as change.\n",pay3/500);
			pay3=pay3%500;
		if(pay3/100>0)
			printf("Give %d 100-dollar bills as change.\n",pay3/100);
			pay3=pay3%100;
		if(pay3/50>0)
			printf("Give %d 50-dollar bills as change.\n",pay3/50);
			pay3=pay3%50;
		if(pay3/10>0)
			printf("Give %d 10-dollar bills as change.\n",pay3/10);	
			pay3=pay3%10;
		if(pay3/5>0)
			printf("Give %d 5-dollar bills as change.\n",pay3/5);
			pay3=pay3%5;
		if(pay3/1>0)
			printf("Give %d 1-dollar bills as change.\n",pay3/1); 
	}
	else if(pay1>pay2)
		printf("The payment amount is insufficient.\n");
	else if(pay1==pay2)	
		printf("The payment is exact.\n");
	
	
	
	system("pause");
	return 0;
}


/* Outcome
Please enter the amount payable:33
Please enter the actual payment amount:1000
Give 1 500-dollar bills as change.
Give 4 100-dollar bills as change.
Give 1 50-dollar bills as change.
Give 1 10-dollar bills as change.
Give 1 5-dollar bills as change.
Give 2 1-dollar bills as change.

Press any key to continue . . .

*/