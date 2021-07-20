#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = 0, total_nodes = 0;

	h = binary_tree_height(tree);
	total_nodes = binary_tree_size(tree);
	return (power(2, h + 1) - 1 == total_nodes);

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
/**
 * power -  a function that find a power of a number and a base
 *
 * @base: base or number
 * @a: exponent of a base
 * Return: power of a number and a base
 */
int power(int base, int a)
{
	if (a == 0)
		return (1);
	else
		return (base * power(base, (a - 1)));
}
