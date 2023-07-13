#include<stdio.h>

main()
{
    int a[100][100];
	int i,j,n1,n2;
	int sum=0;
	
	printf("Enter rows and columns :-  ");
	scanf("%d%d",&n1,&n2);
	
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
    	for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
	        {
	        	if(i == j)
	        	{
	        		sum=sum+a[i][j];
				}
			}
				
		}
			printf("The sum of diagonal elements of an Array :- %d",sum);
	}

