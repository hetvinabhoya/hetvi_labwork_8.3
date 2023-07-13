#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter rows :-  ");
	scanf("%d",&r);
	printf("Enter columns :-  ");
	scanf("%d",&c);
	
	int a[r][c];
	int b[r][c];
	int i,j;
	int sum[r][c];
	
	printf("Enter array A's elements :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);	
	    } 
	}
	
	printf("Enter array B's elements :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	    printf("b[%d][%d] = ",i,j);
		scanf("%d",&b[i][j]);
		}
    }
    
    printf("Elements of Array C is :-  \n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		sum[i][j]=a[i][j]+b[i][j];
    		printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
}
