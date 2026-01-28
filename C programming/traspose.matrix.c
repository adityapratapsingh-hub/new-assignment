#include<stdio.h>
int main(){
	int c,r;
	printf("Enter the number :");
	scanf("%d",&c);
	printf("Enter the number :");
	scanf("%d",&r);
	int arr[c][r];
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	int brr[c][r];
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			brr[i][j]=arr[j][i];
		}
		printf("\n");
    }
    for(int i=0; i<c; i++){
    	for(int j=0; j<r; j++){
    		printf(" %d ",brr[i][j]);
		}
		printf("\n");
	}
    return 0;
}