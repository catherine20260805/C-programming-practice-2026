/*Practice2.3,Fixing Errors in Code*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num=2;                /*Missing a semicolon*/
	printf("num=%d",num);     /*Missing quotation marks*/
	system("pause");
	return 0;
}