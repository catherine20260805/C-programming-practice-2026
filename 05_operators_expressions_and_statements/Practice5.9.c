/*Practice5.9,Hands-on Practice*/
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(void)
{
	int a=5,b=3,num=0;
	num=(a++)+b;
	printf("(a)num=%d,a=%d,b=%d\n",num,a,b);
	
	a=5,b=3,num=0;
	num=(++a)+b;
	printf("(b)num=%d,a=%d,b=%d\n",num,a,b);
	
	a=5,b=3,num=0;
	num=(a++)+(b++);
	printf("(c)num=%d,a=%d,b=%d\n",num,a,b);
	
	a=5,b=3,num=0;
	num=(++a)+(++b);
	printf("(d)num=%d,a=%d,b=%d\n",num,a,b);
	
	a=5,b=3,num=0;
	a+=a+(b++);
	printf("(e)num=%d,a=%d,b=%d\n",num,a,b);
		
	system("pause");
	return 0;
}


/* Outcome
(a)num=8,a=6,b=3
(b)num=9,a=6,b=3
(c)num=8,a=6,b=4
(d)num=10,a=6,b=4
(e)num=0,a=13,b=4
Press any key to continue . . .

*/