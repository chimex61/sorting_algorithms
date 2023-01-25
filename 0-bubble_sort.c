#include "sort.h"


/**
 * bubble_sort - bubble sort algorithm
 * @array: pointer to array to sort
 * @size: number of elements
*/
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
short int swapp_value;
int temp;

do {
	swapp_value = 0;
	for (i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
		  //the swapp functionality here
			temp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = temp;
			swapp_value = i;
			print_array(array, len);
		}
	}
	size = swapp_value;
} while (size >= 1);

}

