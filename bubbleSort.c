#include<stdio.h>
int i,j,temp,flag;
int no,A[50];
int noElements;
void BubbleSort(int A[], int n)
{
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1])
			{	
				temp = A[j];
				A[j] = A[j+1]; 	
				A[j+1] = temp;
				flag=1;
				
			}
		}
		if(flag==0) break;
	}
}
int main()
{
	int x;
	printf("Enter Total no of Elements to be Sorted: \n");
	scanf("%d",&noElements);
	printf("Enter Elements:");
	for(no=0;no<noElements;no++)
		scanf("%d",&A[no]);

	printf("Before sorting \n");
	 for(no=0;no<noElements;no++)
		printf("%d \t ",A[no]);
	
	printf("\n After Sorting \n");
	BubbleSort(A,no);
	for(x=0;x<no;x++)
		printf("%d\t ",A[x]);
}