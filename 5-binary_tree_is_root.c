#include "binary_trees.h"
/**
 * binary_tree_is_root - Function to checks if a given node is a root node.
 * @node: node to check.
 * Return: 1 (node is a root node) 0 (node is not a root node)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
