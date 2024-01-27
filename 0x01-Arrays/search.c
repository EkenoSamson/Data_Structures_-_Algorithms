#include "array.h"

int findelement(int arr[], int elem, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (arr[i] == elem)
			return i;
	}
	return (-1);
}
