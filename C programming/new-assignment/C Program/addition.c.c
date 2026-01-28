#include<stdio.h>
int main(){
	int a,b,c,d,i,j;
	printf("Enter the number of row :");
	scanf("%d",&a);
	printf("Enter the number of colum :");
	scanf("%d",&b); 
	printf("Enter the number of row :");
	scanf("%d",&c);
	printf("Enter the number of colum :");
	scanf("%d",&d);
    int arr[a][b];
    int brr[c][d];
    printf("\n");
    int res[i][j];
  // int res[c][d];
    for(int i=0; i<a; i++){
    	for(int j=0; j<b; j++){
    		scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<c; i++){
		for(int j=0; j<d; j++){
			scanf("%d",&brr[i][j]);
		}
	
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<c; j++){
			res[i][j]=arr[i][j]+brr[i][j];
		}
		printf("\n");
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<c; j++){
			printf("%d ",res[i][j]);

    	}
    	printf("\n");
    	
	}
		return 0;
	
}