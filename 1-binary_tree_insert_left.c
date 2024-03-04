#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child
 *
 * @parent: is a pointer to the node to insert the left-child
 * @value:  is the value to stored in the new node
 *
 * Description - If parent already has a left-child, the new node must
 *				take its place
 *
 * Return: a pointer to the created node, or NULL on failure or if
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
