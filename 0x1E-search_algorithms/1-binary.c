#include "search_algos.h"
#include "stddef.h"
#include "stdio.h"

/*
 * binary_search - Function that searches for a value in a sorted array.
 * @value: value to search for.
 * @size: the number of elements in the array.
 * @array: pointer to the first element of the array.
 *
 * Return: -1 if value absent.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

