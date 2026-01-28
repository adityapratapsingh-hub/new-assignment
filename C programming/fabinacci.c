#include<stdio.h>
int main(){
	int n,n1=0,n2=1,n3;
	
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		n3=n1+n2;
		printf("%d \n",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}