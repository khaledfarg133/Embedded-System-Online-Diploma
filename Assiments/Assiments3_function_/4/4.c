/* Source Code to calculate power using recursive function */


#include<stdio.h>
int power (int n1 , int n2);
int main(){

	int base , exp ;
	printf("enter base number: ");
	fflush(stdout); fflush(stdin);
	scanf ("%d",&base);
	printf("enter power number(posative integer): ");
	fflush(stdout); fflush(stdin);

	scanf ("%d",&exp);
	printf("%d^%d=%d ",base,exp,power (base,exp));

	return 0;
}

int power (int base ,int exp)
{

	if (exp!= 0)
	{
		return (base*power (base ,exp-1));

	}
	else
		return 1 ;
}
