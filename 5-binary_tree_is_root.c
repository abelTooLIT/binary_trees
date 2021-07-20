#include "binary_trees.h"
/**
 * binary_tree_is_root - binary_tree_is_root it means
 *  have pointer NULL to parent
 *
 * @node: node is a pointer to the node to check
 * Return: must return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	return (0);
}
