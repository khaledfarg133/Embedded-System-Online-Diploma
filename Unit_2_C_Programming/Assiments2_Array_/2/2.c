

#include <stdio.h>
int main (){



	int n,i;
	float sum=0,Avg=0;
	float arr1[100] ;


	printf("enter the number of element in the array\n");
	fflush(stdout) ; fflush(stdin);
	scanf("%d",&n);

	if (n<=0 || n>100){
		printf("Error the number should be in range 1 to 100\n");


	}
	else {
		//_______________________________________________enter the element in the array_______________________________________________//

		printf("the number of element in the array is%d\n",n);

		printf("enter the element in the array\n");

		for (i=0 ; i<n ; i++){
			printf("entera[%d]:",i);
			fflush(stdout) ; fflush(stdin);
			scanf("%f",&arr1[i]);
		}

		//_______________________________________________calculate the sum of element in the array_______________________________________________//


		for (i=0 ; i<n ; i++){

			sum=sum+arr1[i]	;

		}
		printf("%f\n",sum);


		Avg=sum/n;
		printf("%f\n",Avg);
	}
	return 0;

}
