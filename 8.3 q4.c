#include<stdio.h>

main()
{
	int i,j;
	
	printf("Enter rows :- ");
	scanf("%d",&i);
	printf("Enter columns :- ");
	scanf("%d",&j);
	
	int a[i][j];
	int sum=0;
	int r,c;
	
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			printf("a[%d][%d] :- ",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
		 if(r == 0 || c == 0  || r == 4 || c == 4)
		 {
		 	printf("%d ",a[r][c]);
		 	sum=sum + a[r][c];
		 }
		 else 
		 printf("  ");
		}
		printf("\n");
	}
	printf("\nThe sum of boundary elements of an array :- %d",sum);
	
}
