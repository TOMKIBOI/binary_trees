#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 * @array: a pointer to the first element of the array
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int x;
	heap_t *root = NULL;

	for (x = 0; x < size; x++)
		heap_insert(&root, array[x]);

	return (root);
}
