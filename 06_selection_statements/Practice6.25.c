/*Practice6.25,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=1900;
	start:		
		if(i > 2000)
        goto end;
        
		if(i%400==0)
			printf("%d.\n",i);
		else if(i%100!=0 && i%4==0)
				printf("%d.\n",i);
		i++;
		goto start;
	
	
	end:
		
	system("pause");
	return 0;
}

/* Outcome
1904.
1908.
1912.
1916.
1920.
1924.
1928.
1932.
1936.
1940.
1944.
1948.
1952.
1956.
1960.
1964.
1968.
1972.
1976.
1980.
1984.
1988.
1992.
1996.
2000.
Press any key to continue . . .

*/