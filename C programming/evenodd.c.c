#include<stdio.h>
int main(){
	int n;
	printf("Enter the nunber :");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		if(i%2==0){
			printf(" even number is :%d\n",i);
		}
	else {
			printf("odd number is :%d\n",i);
		}
	}
	return 0;
}