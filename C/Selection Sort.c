// 23 jan
// Selection sort

#include <stdio.h>

void selection_sort(int arr[], int n);

int main()
{
	int arr[10],i,n;
	
	printf("Enter no of elements : ");
	scanf("%d", &n);
	
	printf("Enter the values\n");
	for(i=0; i<n; i++)
	     scanf("%d", &arr[i]);
	
	selection_sort(arr, n);
	
	printf("The sorted array is \n");
	for(i=0; i<n; i++)
	      printf("%d ", arr[i]);
	
	return 0;
}

void selection_sort(int arr[], int n)
{
	int i , j, mindex,temp;
	for(i=0; i<n-1; i++)
	{
		mindex = i ;
		for(j=i+1; j<n; j++)
		{
			if(arr[j] < arr[mindex])
			   mindex = j;
		}
		if(mindex != i)
		{
			temp = arr[mindex];
			arr[mindex] = arr[i];
			arr[i] = temp;
		}
	}
}
