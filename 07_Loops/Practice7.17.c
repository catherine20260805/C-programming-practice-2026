/*Practice7.17,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=1,sum=0;
	while(i<=10)
	{
		printf("%d*%d=%d\n",i,i,i*i);
		sum+=i*i;
		i++;		
	}
	printf("1*1+2*2+...+10*10=%d\n",sum);
	
	system("pause");
	return 0;
}
/* Outcome
1*1=1
2*2=4
3*3=9
4*4=16
5*5=25
6*6=36
7*7=49
8*8=64
9*9=81
10*10=100
1*1+2*2+...+10*10=385
Press any key to continue . . .

*/