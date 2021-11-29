#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: node is NULL, return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL)
	{
		i += 1;
	}
	if (tree->left != NULL)
	{
		i += 1;
	}
	if (tree->right == NULL || tree->left == NULL)
	{
		return (1);
	}
	return (i);
}
