#include<stdio.h>
void accept();
void display();
void mull();
int m1[10][10],m2[10][10],mul[10][10];
int r1,c1,r2,c2,r,i,j,k,sum;
void main()
{
	
	accept();
	display();
	mull();
}
void accept()
{
	
	do
	{
		printf("Enter the number of row 1st matrix::\n");
		scanf("%d",&r1);
		printf("Enter the number of column 1st matrix::\n");
		scanf("%d",&c1);
		printf("Enter the number of row 2nd matrix::\n");
		scanf("%d",&r2);
		printf("Enter the number of column 2nd matrix::\n");
		scanf("%d",&c2);
	if(r1==c2&&r2==c1)
		r=0;
	else
	{	
		printf("----please Re-Enter matrix order----\n");
	}
	}while(r!=0);
	printf("enter the 1st matrix element\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	printf("enter the 2st matrix element\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	
}
void display()
{
	printf("The 1st matrix element\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("The 2st matrix element\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}	
}
void mull()
{
	for(i=0;i<r1;i++){ //row of first matrix
      for(j=0;j<c2;j++){  //column of second matrix
           sum=0;
           for(k=0;k<r1;k++)
               sum+=m1[i][k]*m2[k][j];
           mul[i][j]=sum;
		}
	}	
	printf("The product of matrix m1 & m2::\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}	
}
