#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that creates a binary tree
 *
 * @parent: Pointer to the node parent
 * @value: value of node
 *
 * Return: pointer to new tree created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (!(parent->left))
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
