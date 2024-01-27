#include "array.h"

void insertany(int arr[], int n, int pos, int elem)
{
	int i;
	for (i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];

	arr[pos] = elem;
}
