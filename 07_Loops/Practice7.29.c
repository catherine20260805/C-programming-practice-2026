/*Practice7.29,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int input,cnt=0,passwd=6128;
	
	while(1)
	{
		do
		{
			printf("Please enter your password:");
			scanf("%d",&input);
			cnt++;
			if(input==passwd)
				printf("The password is correct.\n");
		}while(input!=passwd && cnt<3);
		if(cnt==3&&input!=passwd)
			printf("You have entered the password more than three times.\n");
		break;
	}
			
	system("pause");
	return 0;
}