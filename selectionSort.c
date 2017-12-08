#include<stdio.h>
int i,j,temp;
int no,A[50];
int noElements;
void SelectionSort(int A[], int n)
{
	int iMin;
	for(i=0;i<n-1;i++)
	{
		 iMin=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[iMin])
				iMin= j;
		}	
	temp = A[i];
	A[i] = A[iMin]; 
	A[iMin] = temp;
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
	SelectionSort(A,no);
	for(x=0;x<no;x++)
		printf("%d\t ",A[x]);
}