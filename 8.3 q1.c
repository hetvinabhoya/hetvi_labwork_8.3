#include<stdio.h>

main()
{
	 int i,j;
	
	printf("Enter the array's row size:- ");
	scanf("%d",&i);
	
	printf("Enter the array's column size:- ");
	scanf("%d",&j);
	
	int a[i][j];
	int r,c;
	float average,sum=0; 
	for(r=0;r<i;r++)
	{ 
		for(c=0;c<j;c++)
		{
			printf("a[%d][%d] = ",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			printf("%d ",a[r][c]);
		
		}
		printf("\n");
	}
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			sum=sum+a[r][c];
		}
	}
	average=sum/(i*j);
	printf("sum = %f\n",sum);
	printf("average = %f",average);
}
