#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 *
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending order
 * using the shell sort algorithm.
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Implements the shell sort algorithm
 * with the Knuth interval sequence.
 * Prints the array after each swap to visualize the sorting process.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, m, n;

	if (array == NULL || size < 2)
		return;

	/* Calculate the initial gap using the Knuth interval sequence. */
	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	/* Start shell sort with decreasing gaps. */
	for (; gap >= 1; gap /= 3)
	{
		for (m = gap; m < size; m++)
		{
			n = m;
			/* Insertion sort within the gap interval. */
			while (n >= gap && array[n - gap] > array[n])
			{
				swap_ints(array + n, array + (n - gap));
				n -= gap;
			}
		}
		/* Print the array after each gap interval sorting step. */
		print_array(array, size);
	}
}

