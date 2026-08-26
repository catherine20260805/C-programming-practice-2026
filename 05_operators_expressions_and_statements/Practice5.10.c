/*Practice5.10,Hands-on Practice*/
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(void)
{
	int a=12,b=6;
	a/=b;
	printf("(a)a=%d,b=%d\n",a,b);
	
	a=12,b=6;
	a*=b++;
	printf("(b)a=%d,b=%d\n",a,b);
	
	a=12,b=6;
	a*=++b;
	printf("(c)a=%d,b=%d\n",a,b);
	
	a=12,b=6;
	a*=b--;
	printf("(d)a=%d,b=%d\n",a,b);
	
	a=12,b=6;
	a%=b;
	printf("(e)a=%d,b=%d\n",a,b);
		
	system("pause");
	return 0;
}


/* Outcome
(a)a=2,b=6
(b)a=72,b=7
(c)a=84,b=7
(d)a=72,b=5
(e)a=0,b=6
Press any key to continue . . .

*/