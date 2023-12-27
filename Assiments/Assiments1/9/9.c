


#include <stdio.h>

int main() {
	char c ;
	float a, b ;

	printf ("enter the operation\n");
	scanf("%c",&c);

	printf ("enter the numbers \n");

	scanf("%f%f",&a,&b);


	switch(c){

	case'+':
		printf ("%f+%f=%f",a,b,a+b);
		break;


	case'-':

		printf ("%f+%f=%f",a,b,a-b);

		break;

	case'*':

		printf ("%f+%f=%f",a,b,a*b);

		break;

	case'/':

		printf ("%f+%f=%f",a,b,a/b);

		break;
	default:



	}


	return 0;
}

