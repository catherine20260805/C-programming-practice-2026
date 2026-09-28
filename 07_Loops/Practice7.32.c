/*Practice7.32,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,input,cnt=0;
	printf("Please enter an integer:");
	scanf("%d",&input);
	for(i=1;i<=input;i++)
	{
		if(input%i==0)
			cnt++;				
	}
	if(cnt==2)
		printf("The number is prime.\n");
	else
		printf("The number is not prime.\n");
			
	system("pause");
	return 0;
}
