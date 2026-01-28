#include<stdio.h>
int main(){
	int n,r,fact,s;
	printf("Enter the number :");
	scanf("%d",&n);
	fact=1;
	while(n>1){
			fact=fact*n;
		r=n%10;
		s=s*10+r;
		n=n/10;
	}

	
	printf("%d",fact);
	return 0;
}