#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_le = 0;
	size_t height_ri = 0;

	if (!tree)
		return (0);

	height_le = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_ri = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_le > height_ri ? height_le : height_ri);
}
