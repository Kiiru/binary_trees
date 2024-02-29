#include "binary_trees.h"

/**
 * binary_tree_insert_right - Operation pointer that inserts node as
 *	the right-child of another node
 * @parent: is a pointer to the node to insert the right the right-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent
 *	is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (parent == NULL)
		return (NULL);
	right = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right->parent = right;
		right->right = parent->right;
	}
	parent->right = right;
	return (right);
}
