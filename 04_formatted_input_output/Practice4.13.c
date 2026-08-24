/*Practice4.13,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str[10];
	printf("Please enter string:");
	scanf("%s",&str);         
	printf("(a)Enclose the string in double quotation marks:\"%s\"\n",str);
	printf("(b)Enclose the string with backslashes \\ , and set the field width to 20 when printing:\\%20s\\\n",str);
	printf("(c)Enclose the string with backslashes \\, set the field width to 20, and left-align the output:\\%-20s\\\n",str);
	
	system("pause");
	return 0;
}


/* Outcome(Suppose enter = 1234567890)

Please enter string:1234567890
(a)Enclose the string in double quotation marks:"1234567890"
(b)Enclose the string with backslashes \ , and set the field width to 20 when printing:\          1234567890\
(c)Enclose the string with backslashes \, set the field width to 20, and left-align the output:\1234567890          \
Press any key to continue . . .

*/