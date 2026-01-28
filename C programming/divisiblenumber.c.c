#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(n%5==0&&n%7==0){
		printf("Divisible by");
		
	}
	else{
		printf("Not Divisible by");
	}
	return 0;
}