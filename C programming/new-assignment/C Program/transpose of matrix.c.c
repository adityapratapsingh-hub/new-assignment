#include<stdio.h>
int main ()
{
	int p,q;
	printf("enter no of row");
	scanf("%d",&p);
	printf("enter no of coloumn");
	scanf("%d",&q);
	int a[p][q],b[p][q],i,j;
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}