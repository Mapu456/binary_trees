#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child in a binary tree.
 * @tree: root node.
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (!tree)
		return (0);

	/*
	* When there are children in the tree, transverse and
	* count every node that has a child
	*/
	if (tree->left || tree->right)
		n_nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (n_nodes);
}
