#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 *  factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to
 *  measure the balance factor
 * Return: integer unsigned int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0, right = 0, left = 0;

	if (!tree)
		return (0);

	left =  binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (!tree->left)
		left -= 1;
	if (!tree->right)
		right -= 1;

	balance_factor = left - right;
	return (balance_factor);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree:is a pointer to the root node of the tree to measure the height.
 * Return: integer unsigned int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
