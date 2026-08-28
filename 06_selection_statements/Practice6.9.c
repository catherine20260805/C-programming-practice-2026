/*Practice6.9,Hands-on Practice*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	int sum1=0,sum2=0,sum3=0;
	
	printf("Please enter the grades of 10 students:");
	scanf("%d %d %d %d %d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10);
	
	if(s1>=76 && s1<=100)
		sum1+=1;
	else if(s1>=60 && s1<=75)
			sum2+=1;
		else if(s1>=0 && s1<=59)
				sum3+=1;
	
	if(s2>=76 && s2<=100)
		sum1+=1;
	else if(s2>=60 && s2<=75)
			sum2+=1;
		else if(s2>=0 && s2<=59)
				sum3+=1; 
	
	if(s3>=76 && s3<=100)
		sum1+=1;
	else if(s3>=60 && s3<=75)
			sum2+=1;
		else if(s3>=0 && s3<=59)
				sum3+=1; 
	
	if(s4>=76 && s4<=100)
		sum1+=1;
	else if(s4>=60 && s4<=75)
			sum2+=1;
		else if(s4>=0 && s4<=59)
				sum3+=1; 
	
	if(s5>=76 && s5<=100)
		sum1+=1;
	else if(s5>=60 && s5<=75)
			sum2+=1;
		else if(s5>=0 && s5<=59)
				sum3+=1; 
	
	if(s6>=76 && s6<=100)
		sum1+=1;
	else if(s6>=60 && s6<=75)
			sum2+=1;
		else if(s6>=0 && s6<=59)
				sum3+=1; 
	
	if(s7>=76 && s7<=100)
		sum1+=1;
	else if(s7>=60 && s7<=75)
			sum2+=1;
		else if(s7>=0 && s7<=59)
				sum3+=1; 
	
	if(s8>=76 && s8<=100)
		sum1+=1;
	else if(s8>=60 && s8<=75)
			sum2+=1;
		else if(s8>=0 && s8<=59)
				sum3+=1; 
	
	if(s9>=76 && s9<=100)
		sum1+=1;
	else if(s9>=60 && s9<=75)
			sum2+=1;
		else if(s9>=0 && s9<=59)
				sum3+=1; 
	
	if(s10>=76 && s10<=100)
		sum1+=1;
	else if(s10>=60 && s10<=75)
			sum2+=1;
		else if(s10>=0 && s10<=59)
				sum3+=1; 
	
	printf("The number of students who received an A:%d\n",sum1);
	printf("The number of students who received a B:%d\n",sum2);
	printf("The number of students who received a C:%d\n",sum3);
		
	system("pause");
	return 0;
}

/* Outcome
Please enter the grades of 10 students:66 81 55 56 73 70 69 43 100 95
The number of students who received an A:3
The number of students who received a B:4
The number of students who received a C:3

Press any key to continue . . .

*/