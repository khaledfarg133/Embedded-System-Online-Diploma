//EXI: Prime Numbers Between two Intervals by Making User-defined Function

#include<stdio.h>
int check_prime(int num);
int main(){

	int n1,n2,i,f1ag ;

	printf( "Enter two numbers(intervals) :");
	scanf("%d %d" ,&n1, &n2) ;

	printf("Prime numbers between %d and %d are : ",n1,n2);
for (i = n1+1 ; i<n2 ; ++i){
		f1ag = check_prime (i) ;
		if(f1ag == 0){
			printf("%d\t",i);
		}
	}
	return 0;
}
int check_prime(int num) // * User-defined function to check prime numbel
{
	int j, flag=0;
	for (j=2 ; j<num/2 ; ++j ) {
		if(num%j==0){
			flag=1;
			break;
		}


	}
	return flag ;


}
