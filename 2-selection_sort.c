#include "sort.h"
/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int min, temp;
	size_t i, j, j_min;
	
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		j_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < a[j_min])
				j_min = j;
		}
		if (j_min != i)
		{
			temp = array[j_min];
			array[j_min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
