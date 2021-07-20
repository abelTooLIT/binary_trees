#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a new node in the right
 *
 * @parent: Pointer to the node parent
 * @value: value of node
 *
 * Return: pointer to new tree created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!(parent->right))
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
