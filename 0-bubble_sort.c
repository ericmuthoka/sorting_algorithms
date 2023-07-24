#include "sort.h"

/**
 * bubble_sort - Sorts an array integers in ascending by Bubble sort.
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

	for (i = 0; i < size - 1; i++) /* Iterate through the array */
	{
		swapped = 0; /* Initialize a flag to track any swaps made */

		for (j = 0; j < size - i - 1; j++) /* Compare adjacent elements */
		{
			if (array[j] > array[j + 1]) /* If the current element is greater */
			{
				/* Swap the elements */
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print the array after each swap */
				printf("After swapping: ");
				for (size_t k = 0; k < size; k++)
					printf("%d ", array[k]);
				printf("\n");

				swapped = 1; /* Set the flag to indicate a swap was made */
			}
		}

		/* If no swaps were made in this pass, the array is sorted */
		if (!swapped)
			break;
	}
}

