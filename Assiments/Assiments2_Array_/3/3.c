#include <stdio.h>

int main (){
	//______________________________________Deffine the variables_______________________________________________//

	int r,c,i,j ;
	int arr[10][10],trans[10][10];

	//________________________________Enter the number of row and column of the array________________________________________//

	printf("Enter the number of row and column of the array");
	fflush(stdout) ; fflush(stdin);
	scanf("%d %d", &r, &c);

	printf("r=%d\tc=%d",r,c);



	//_________________________________________Enter the element of the array_______________________________________________//

	for (i=0 ; i<r ; i++){
		for (j=0 ; j<c ; j++){
			printf("\nenter[%d][%d]=",i,j);
			fflush(stdout) ; fflush(stdin);
			scanf("%d",&arr[i][j]);


		}
	}
	//_________________________________________ Print the element of the array_______________________________________________//


	printf("the element of the array is\n");
	for (i=0 ; i<r ; i++){
		for (j=0 ; j<c ; j++){
			printf("\narr[%d][%d]=",i,j);

			printf("%d\n",arr[i][j]);
		}
	}


	//_______________________________________________Doing the Transpose _______________________________________________//

	for (i=0 ; i<r ; ++i){
		for (j=0 ; j<c ; ++j){
			trans[j][i]=arr[i][j];

		}
	}



	//_____________________________________ Print the element of the transpose array_______________________________________________//

	printf("\nthe element of the transpose is\n");
	for (i=0 ; i<c ; i++){
		for (j=0 ; j<r ; j++){
			printf("\ntrans[%d][%d]=",i,j);
			printf("%d\n",trans[i][j]);
		}

	}
	return 0;
}
