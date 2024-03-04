#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL when failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration of the new node with its data type */
	binary_tree_t *neNode;

	/* allocate memory space for that node */
	neNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (neNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the newnode */
	neNode->parent = parent;
	neNode->n = value;
	neNode->left = NULL;
	neNode->right = NULL;

	/* return a pointer to the new node */
	return (neNode);
}
