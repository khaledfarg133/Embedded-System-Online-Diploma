


#include <stdio.h>

int main (){
	//______________________________________Deffine the variables_______________________________________________//

	int element,num,i,location ;
	int arr1[30];


	//________________________________Enter the number element of the array________________________________________//

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

	//_________________________________________ Print the element of the array_______________________________________________//


	printf("the element of the array after  is\n");
	for (i=0 ; i<num ; i++){
		//	printf("\narr1[%d]=",i);

		printf("%d\n",arr1[i]);
	}

	//________________________________Enter the  element that we will insert in the array________________________________________//

	printf("\nEnter the  element that we will insert in the array\t");
	fflush (stdout) ; fflush(stdin);
	scanf("%d", &element);


	//________________________________Enter the location of element that we will insert in the array________________________________________//

	printf("\nEnter the location of element that we will insert in the array\t");
	fflush (stdout) ; fflush(stdin);
	scanf("%d",&location);


	//__________________________________________insertion Operation________________________________________//

	for (i=num ; i>=location ;i--){
		arr1[i]=arr1[i-1];
	}
	num++;
	arr1[location-1]=element;
	//_________________________________________ Print Array after insertion is_______________________________________________//


	printf("Array after insertion is\n");
	for (i=0 ; i<num ; i++){
		//	printf("\narr1[%d]=",i);

		printf("%d\t",arr1[i]);
	}


	return 0 ;
}

