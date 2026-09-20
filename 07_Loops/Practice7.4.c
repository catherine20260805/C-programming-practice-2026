/*Practice7.4,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	
	for(ch=41;ch<=64;ch++)
	{	
		printf("ASCII %d=%c\n",ch,ch);
	}
	
	system("pause");
	return 0;
}

/* Outcome
ASCII 41=)
ASCII 42=*
ASCII 43=+
ASCII 44=,
ASCII 45=-
ASCII 46=.
ASCII 47=/
ASCII 48=0
ASCII 49=1
ASCII 50=2
ASCII 51=3
ASCII 52=4
ASCII 53=5
ASCII 54=6
ASCII 55=7
ASCII 56=8
ASCII 57=9
ASCII 58=:
ASCII 59=;
ASCII 60=<
ASCII 61==
ASCII 62=>
ASCII 63=?
ASCII 64=@

Press any key to continue . . .

*/