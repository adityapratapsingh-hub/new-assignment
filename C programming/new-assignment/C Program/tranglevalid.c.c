#include<stdio.h>
int main(){
	int A,B,C,D;

	printf("Enter the number :");
	scanf("%d",&A);
	printf("Enter the number :");
	scanf("%d",&B);
	printf("Enter the number :");
	scanf("%d",&C);
	printf("Enter the number :");
	scanf("%d",&D);
	if(A+B+C+D==180){
		printf("yes");
	}else{
		printf("N0");
	}
	return 0;
}