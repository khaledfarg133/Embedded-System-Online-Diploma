

#include <stdio.h>

int main (){

	//______________________________________Deffine the variables_______________________________________________//

	char string[1000],c;
	int i,count=0 ;

	//___________________________________________Enter the string ______________________________________________//

	printf("Enter the string");
	fflush (stdout) ; fflush(stdin);
	gets(string);

	printf("%s\n",string);

	//________________________________Enter the number of element of the array________________________________________//

	printf("Enter the character to find frequency ");
	fflush (stdout) ; fflush(stdin);
	scanf("%c", &c);

	//__________________________________________ Compare Operation________________________________________//

		for (i=0 ; i<sizeof(string) ;i++){
			if(string[i]==c){
				count++;
			}
		}
		printf ("The frequency of (%c) = %d ",c,count);
		count = 0 ;





	return 0 ;

}

