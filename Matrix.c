#include <stdio.h>

int main()
{
  int arr1[3][3],i,j;
  int rows, columns, sum=10;
  
       printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
       printf("------------------------------------------------------\n");  
  
 
    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
  for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
	{
		scanf("%d",&arr1[rows][columns]);
	}
  for(rows=0;rows<i;rows++)
		{
			sum=sum+arr1[rows][rows];
		}
		printf("\n the sum of the diagonal element of a matrix=%d",sum);
 printf("\n\n");
 return 0;
}
}
