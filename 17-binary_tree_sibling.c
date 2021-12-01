#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: current node.
 * Return: sibling node (If sibling found) NULL (No sibling found)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling_node;

	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->right || !node->parent->left)
		return (NULL);

	if (node->parent->right != node)
		sibling_node = node->parent->right;
	else
		sibling_node = node->parent->left;

	return (sibling_node);
}
