#include "array.h"

void reversearr(int arr[], int start, int end)
{
	int temp;
	end--;	
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = arr[temp];
		start++;
		end--;
	}
}
