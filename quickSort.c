#include<stdio.h>
void quick(int [],int, int);
int partition(int [], int, int);
void main()
{
	int i, n, x[20];
	printf("\nEnter the number of element: -");
	scanf("%d",&n);
	printf("\nEnter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	quick(x,0,n-1);
	printf("\nSorted list is as follows:\n");
	for(i=0;i<n;i++)
		printf("%d\t",x[i]);
}

void quick(int x[], int lb, int ub)
{
	int j;
	if(lb>=ub)
		return;
	j=partition(x, lb, ub);
	quick(x,lb,j-1);
	quick(x,j+1,ub);
}

int partition(int x[], int lb, int ub)
{
	int pivot, down, up, temp;
	pivot=x[lb];
	up=ub;
	down=lb;
	while(down<up)
	{
		while(x[down]<=pivot && down<ub)
			down++;
		while(x[up]>pivot)
			up--;
		if (down<up)
		{
			temp=x[down];
			x[down]=x[up];
			x[up]=temp;
		}
	}
	x[lb]=x[up];
	x[up]=pivot;
	return up;
}




