#include<stdio.h>
int main(){
	int fact,n;
	printf("Enter the number :");
		scanf("%d",&n);
		fact=1;
		for(int i=1; i<=n; i++){
			fact=fact*i;
		
		}
			printf("final factorial :",fact);
		return 0;
}