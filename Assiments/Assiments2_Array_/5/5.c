

#include <stdio.h>

int main (){

	//______________________________________Deffine the variables_______________________________________________//

	int element,num,i ;
	int arr1[30];

	//________________________________Enter the number of element of the array________________________________________//

	printf("Enter the number of the element");
	fflush (stdout) ; fflush(stdin);
	scanf("%d", &num);

	//_______________________________________________enter the element in the array_______________________________________________//

	printf("the number of element in the array is %d\n",num);

	printf("enter the element in the array\n");

	for (i=0 ; i<num ; i++){
		printf("entera[%d]:",i);
		fflush(stdout) ; fflush(stdin);
		scanf("%d",&arr1[i]);
	}

	//________________________________Enter the  element that we will search in the array________________________________________//

	printf("\nEnter the  element that we will search in the array\t");
	fflush (stdout) ; fflush(stdin);
	scanf("%d", &element);
	//__________________________________________ search Operation________________________________________//

		for (i=0 ; i<num ;i++){
			if (arr1[i]==element){
				if (i<num){
				printf("the element is arr1[%d]=%d:",i,arr1[i]);
				}
				else{
				printf("The element is not found ");
				}

			}
		}



	return 0 ;
}
