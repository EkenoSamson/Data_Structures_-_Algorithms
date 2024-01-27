#include "array.h"


void deleteany(int arr[], int n, int pos)
{
	int i;

	for (i = pos; i < n; i++)
		arr[i] = arr[i + 1];
}
