/*Practice7.30,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int input,cnt,passwd=6128;
	
	
	for(cnt=1;cnt<=3;cnt++)
	{
		printf("Please enter your password:");
		scanf("%d",&input);
		if(input==passwd)
		{
			printf("The password is correct.\n");
			break;
		}		
		if(cnt==3 && input!=passwd)
		{
			printf("You have entered the password more than three times.\n");
			break;
		}						
	}
			
	system("pause");
	return 0;
}