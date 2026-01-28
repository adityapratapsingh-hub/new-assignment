#include<stdio.h>
int main(){
	int n,m;
	int p,r;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("Enter the number ");
	scanf("%d",&m);
	printf("Enter the second array");
	scanf("%d",&p);
	printf("Enter the number :");
	scanf("%d",&r);
	int arr[n][m];
	int arr1[p][r];
//	int res[n][m];
	//int res[p][r];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<p; i++){
		for(int j=0; j<r; j++){
			scanf("%d",arr1[i][j]);
		}
	}
	
	for(int i=0; i<n; i++){
		int res=0;
		for(int j=0; j<m; j++){
		 res[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",res[i][j]);
		}
	}
	return 0;
}