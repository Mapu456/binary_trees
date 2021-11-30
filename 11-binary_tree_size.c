#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: root node
 * Return: size of the binary tree or 0 if tree doesn't exist.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 1;

	if (!tree)
		return (0);

	tree_size += binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (tree_size);
}
