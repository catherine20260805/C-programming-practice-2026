/*Practice7.33,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,input,cnt;
	do
	{
		printf("Please enter an integer:");
		scanf("%d",&input);
	}while(input<=0);
	for(i=input;i>=2;i--)
	{	
		cnt=0;
		for(j=1;j<=i;j++)
			if(i%j==0)
				cnt++;				
		if(cnt==2)
		{
			printf("The largest prime number less than %d is %d.\n",input,i);
			break;
		}		
	}
	
			
	system("pause");
	return 0;
}
