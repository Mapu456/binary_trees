#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: root node.
 * Return: 1 (The tree is a Full tree) 0 (The tree is not a Full tree)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If the node has one child, the tree is not a binary tree*/
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);

	/* If the node has two children, transvere the tree recursevely*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));

	/*
	* If none of the above apply, then the tree is full
	* and the nodes doesn't have children
	*/
	return (1);
}
