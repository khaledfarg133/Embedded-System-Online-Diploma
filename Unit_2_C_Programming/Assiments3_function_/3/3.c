/*________________________________Example to reverse a sentence entered by user without using strings.______________________________*
*/
#include<stdio.h>
void Reverse();

int main(){
	printf("enter a sentence : ");
	Reverse();
	return 0;
}

void Reverse()
{
	char c ;
	scanf ("%c",&c);
	if (c!='\n')
	{
		Reverse();
		printf("%c:",c);

	}
}
