#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}

void selection_sort(int arr[], int size)
{
	int i=0 ,j, loc = 0;
	while(i < size)
	{
		for(j = 1; j< size; j++)
		{
			if(arr[j] < arr[i])
			{
				swap(&arr[i], &arr[j]);
			}
			i++;
		}
	--size;
	i=0;
	}
}

int ack(int m, int n)
{
	if(m==0)
		return n+1;
	else if(n==0)
		return (ack(m, ack(m-1,n)));
	else 
		return ack(m-1,n-1);
}

//int main()
//{
//	int i;
//	int arr[] = {6,4,9,10,1,0,2,39};
//	selection_sort(arr, 8);
//	for(i = 0; i<8; i++ )
//	{
//		printf("%d ,",arr[i]);
//	}
//	int k = ack(2,1);
//	return 0;
//}