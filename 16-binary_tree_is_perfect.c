#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the tree tree of the tree to traverse
 * Return: tree is NULL, return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || height(tree->left) != height(tree->right))
	{
		return (0);
	}
	if (tree->right && tree->left)
	{
		return (1);
	}
	return (binary_tree_is_perfect(tree->left) *
	binary_tree_is_perfect(tree->right));
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
	int lh;
	int rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	lh = height(tree->left);
	rh = height(tree->right);
	if (lh >= rh)
	{
		return (1 + lh);
	}
	return (1 + max(height(tree->left), height(tree->right)));
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
