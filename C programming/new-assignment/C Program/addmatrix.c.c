#include<stdio.h>
int main(){
	int c,r;
	int p,s;
	printf("Enter the row :");
	scanf("%d",&c);
	printf("Enter the colum :");
	scanf("%d",&r);
	printf("Enter the row :");
	scanf("%d",&p);
	printf("Enter the colum :");
	scanf("%d",&s);
	int arr[c][r];
	int brr[p][s];
	printf("\n");
	int res[c][r];
	//int res[p][s];
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			scanf("%d",&arr[i][j]);
			
		}
	}
		for(int i=0; i<p; i++){
		for(int j=0; j<s; j++){
			scanf("%d",&brr[i][j]);
			
		}
	}
		for(int i=0; i<p; i++){
		//	int res[i][j]=0;
		for(int j=0; j<s; j++){
			res[i][j]=arr[i][j]*brr[i][j];
						
		}
	}
		for(int i=0; i<p; i++){
		for(int j=0; j<s; j++){
			printf("%d\t",res[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}