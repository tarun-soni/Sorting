#include <stdio.h>
 int n, array[1000],i,hole,value;
void InsertS(int array[],int n)
{
for (i = 1 ; i <= n - 1; i++) 
 {
	value = array[i];
	    hole = i;
 
    while ( hole > 0 && array[hole-1] > array[hole]) 
	{
	      array[hole]   = array[hole-1];
     		 array[hole-1] = value;
     		 hole--;
    	}
 }
}

int main()
{
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
 
  InsertS(array,n);

  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }
 
  return 0;
}