#include "sort.h"

/**
 * swap - Swaps two integer values.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an integer array in ascending order by Bubble sort.
 *
 * @array: The array to be sorted.
 * @size: Number of elements in @array.
 */
void bubble_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	int swapped;
	size_t i, j;

	for (i = 0; i < size - 1; i++) /* Outer loop: Pass through the array */
	{
		swapped = 0; /* Initialize a flag to track if any swaps */

		for (j = 0; j < size - i - 1; j++) /* Compare adjacent elements */
		{
			if (array[j] > array[j + 1]) /* If current element is greater */
			{
				/* Swap the elements */
				swap(&array[j], &array[j + 1]);
				swapped = 1; /* Set the flag to indicate a swap was made */

				/* Print the array after each swap */
				printf("After swapping: ");
				for (size_t k = 0; k < size; k++)
					printf("%d ", array[k]);
				printf("\n");
			}
		}

		/* If no swaps were made in this pass, the array is already sorted */
		if (!swapped)
			break;
	}
}

