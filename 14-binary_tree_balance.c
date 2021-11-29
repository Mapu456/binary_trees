#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: node is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL && tree->left != NULL)
	{
		i += 2;
	}
	if (tree->right != NULL || tree->left != NULL)
	{
		i += -1;
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		i = 0;
	}
	return (i);
}
