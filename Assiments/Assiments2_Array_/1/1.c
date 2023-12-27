


#include <stdio.h>
int main (){
	int i,j;
	float arr1[2][2],arr2[2][2] ,sum[2][2];



	//_______________________________________________Enter the element of 1st array_______________________________________________//

	printf("\nenter the element of 1st array\n\n");

	for (i=0 ; i<2; ++i){
		for (j=0 ; j<2; ++j){
			printf("entera[%d][%d]:",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr1[i][j]);
		}
	}



	for (j=0 ; j<2; ++j){
		for (i=0 ; i<2; i++){
			printf("%f\t",arr1[i][j]);
		}
	}
	//_______________________________________________Enter the element of 2nd array_______________________________________________//

	printf("\n\n\nenter the element of 2nd array\n\n");

	for (i=0 ; i<2; ++i){
		for (j=0 ; j<2; ++j){
			printf("enter[%d][%d]:",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr2[i][j]);
		}
	}



	for (i=0 ; i<2; ++i){
		for (j=0 ; j<2; j++){
			printf("%f\t",arr2[i][j]);
		}
	}

	//___________________________________________Calculate The Sum__________________________________________________//

	for (i=0 ; i<2; ++i){
			for (j=0 ; j<2; ++j){
				sum[i][j]=arr1[i][j]+arr2[i][j] ;

			}
		}
	printf("\n\nsum[2][2]=arr1[2][2]+arr2[2][2]\n\nsum[2][2]\n=");
	for (j=0 ; j<2; ++j){
			for (i=0 ; i<2; i++){

				printf("%f\t",sum[i][j]);
			}
		}
	return 0;
}
