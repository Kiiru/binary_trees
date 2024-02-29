#include "binary_trees.h"

/**
 * binary_tree_insert_left - Operation pointer that inserts a node
 *			as the left-child of another node
 * @parent: pointer to parent to insert the left child
 * @value: is the value to store in the new node
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = calloc(1, sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->parent = parent;
		newNode->n = value;
		newNode->right = NULL;
		newNode->left = NULL;
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
		newNode->n = value;
		newNode->parent = parent;
		newNode->right = NULL;
	}

	return (newNode);
}
