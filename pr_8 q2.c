#include<stdio.h>

sum(int h)
{
	int cube = h*h*h;
	
	printf("%d",cube);
}

void main()
{
	int h;
	int n;
	int i,j;
	int a[10][10];
	
	printf("Enter array's size : ");
	scanf("%d",&n);
	
	int *p[n][n];
	
	printf("Enter array's elements : \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			p[i][j] = &a[i][j];
		}
	}
	
	printf("Cube of all elements : \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			*p[i][j] = ((*p[i][j]) * (*p[i][j]) * (*p[i][j]));
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = %d\n",i,j,*p[i][j]);
		}
	}
	
} 
