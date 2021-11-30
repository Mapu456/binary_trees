#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: if node is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);

	lh = height(tree->left);
	rh = height(tree->right);

	if (abs(lh - rh) <= 1 && binary_tree_balance(tree->left) &&
		binary_tree_balance(tree->right))
		return (1);

	return (0);
}
/**
 * max - returns maximum of two integers
 * @a: int
 * @b: int
 * Return: int
 */
int max(int a, int b)
{
	return ((a >= b) ? a : b);
}

/**
 * height - The function Compute the "height" of a tree. Height is the number
 * of nodes along the longest path from the root node down to
 * the farthest leaf node.
 * @tree: pointer to the root node of the tree to traverse
 * Return: int
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	return (1 + max(height(tree->left), height(tree->right)));
}
