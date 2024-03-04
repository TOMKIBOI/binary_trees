#include "binary_trees.h"

/**
 * tree_size - measures the sum of heights
 * @tree: pointer to the root node
 *
 * Return: Height or 0 if tree is NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	size_t height_le = 0;
	size_t height_ri = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_le = 1 + tree_size(tree->left);

	if (tree->right)
		height_ri = 1 + tree_size(tree->right);

	return (height_le + height_ri);
}

/**
 * heap_to_sorted_array - converts a Binary Max Heap
 * to a sorted array of integers
 * @heap: a pointer to the root node
 * @size: an address to store the size of the array
 *
 * Return: the generated array
 *         NULL on failure
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int x, *y = NULL;

	if (!heap || !size)
		return (NULL);

	*size = tree_size(heap) + 1;

	y = malloc(sizeof(int) * (*size));

	if (!y)
		return (NULL);

	for (x = 0; heap; x++)
		y[x] = heap_extract(&heap);

	return (y);
}
