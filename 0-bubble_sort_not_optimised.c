#include "sort.h"


/**
 * bubble_sort_not_optimised - bubble sort algorithm
 * @array: pointer to array to sort
 * @size: number of elements
*/
void bubble_sort_not_optimised(int *array, size_t size){
size_t i;
short int swap_value;
int temp;

do
{
	swap_value = 0;
	for (i = 1; i < size; i++)
	{
		print_array(array, size);
		if (array[i-1] > array[i])
		{
			temp = array[i];
			array[i] = array[i-1];
			array[i-1] = temp;
			swap_value = 1;
			print_array(array, size);
		}
	}

} while (swap_value != 0);

}
