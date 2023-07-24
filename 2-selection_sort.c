#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 *
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 *
 * Description: Swaps the values of two integers in the array.
 */
void swap_ints(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm.
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size: Number of elements in the array.
 *
 * Description: Implements the selection sort alg to arrange array ascendingly
 * After each swap, the array is printed to visualize the sorting process.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t n, m;

	if (array == NULL || size < 2)
		return;

	for (n = 0; n < size - 1; n++)
	{
		min = array + n;
		for (m = n + 1; m < size; m++)
			min = (array[m] < *min) ? (array + m) : min;

		if ((array + n) != min)
		{
			swap_ints(array + n, min);
			print_array(array, size);
		}
	}
}

