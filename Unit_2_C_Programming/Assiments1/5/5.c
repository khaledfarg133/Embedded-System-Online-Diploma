


#include <stdio.h>

int main() {

	char c;
	printf ("enter the character\n");

	scanf("%c",&c);

	if( ((c>='a')&&(c<='z')) ||  ((c>='A')&&(c<='Z')) ){
		printf (" %c the number is alphabet\n",c);
	}
	else {
		printf (" %c the number is not alphabet\n",c);
	}





	return 0;
}

