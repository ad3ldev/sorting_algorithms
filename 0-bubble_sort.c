#include "sort"

/**
 * bubble_sort - sorts an array using the bubble sort.
 * algorithm in ascending order.
 * @array: array of numbers to sort.
 * @size: size of the array to sort.
 *
 * Return: None.
 */
void bubble_sort(int *array, size_t size)
{
	int i, n, new_n;

	n = (int) size;
	if (array == NULL || size < 2)
		return;
	while(n > 1)
	{
		new_n = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i-1] > array[i])
			{
				SWAP(array[i], array[i-1], int);
				print_array((const int *)array, size);
				new_n = i;
			}
		}
		n = new_n;
	}
	
}
