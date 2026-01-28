#include<stdio.h>
int main(){
	int n; 
	printf("Enter the number :");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("Enter the number :");
		scanf("%d",&a[i]);
	}
	printf("Enter the element :");
	for(int i=0; i<n; i++){
		if(i%2==0){
			printf("even number");
		}else
		{
			printf("odd number ");
		}
		printf("\n");
       }
	
	return 0;
}