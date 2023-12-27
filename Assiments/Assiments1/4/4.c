


#include <stdio.h>

int main() {

	int num;
	printf ("enter the number\n");

	scanf("%d",&num);

	if (num>0){
		printf (" %d the number is positive\n",num);
	}
	else if (num == 0){
		printf (" %d the number equal zero\n",num);
	}
	else  {
			printf (" %d the number is negative\n",num);
		}




	return 0;
}

