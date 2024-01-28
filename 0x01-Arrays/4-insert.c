#include "array.h"



int insertany(int arr[], int n, int pos, int elem)
{
	int i;

	if (arr == NULL)
		return (-1);

	if (n == 0)
	{
		arr[0] = elem;
		return (1);
	}
	for (i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];

	arr[pos] = elem;
	n++;
	return (n);
}
