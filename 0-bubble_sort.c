#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
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
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort.
 * @array: Pointer to the array of integers to be sorted.
 * @size: Number of elements in the array.
 *
 * Description: Implements the Bubble sort algorithm to arrange the array
 * in ascending order. After each swap, the array is printed to visualize the sorting process.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (!bubbly)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}

