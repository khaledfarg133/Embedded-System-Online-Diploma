


#include <stdio.h>

int main() {

	int i, c, sum=1;
	printf ("enter the number\n");

	scanf("%d",&c);

	if (c<=0){
		printf (" %d Error factorial of zero = 0 and  factorial of negative nuber doesn't exist\n",c);
	}
	else {
		for (i=1 ; i<=c ;i++ ){

			sum=sum*i ;

		}
		printf ("sum= %d\n",sum);
	}

	return 0;
}


