#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree:is a pointer to the root node of the tree to measure the size.
 * Return: integer unsigned int
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_binary_tree = 0, left = 0, right = 0;

	if (!tree)
		return (0);

	left =  binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size_binary_tree = left + right + 1;
	return (size_binary_tree);

}
