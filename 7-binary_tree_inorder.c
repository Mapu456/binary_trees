#include "binary_trees.h"
/**
 * binary_tree_inorder - Function that goes through a binary tree
 * using in-order traversal
 * @tree: root node.
 * @func: function pointer to print the node value.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Transverse the left sub-tree first.*/
	binary_tree_inorder(tree->left, func);

	/* Print parent(root) node o the tree or sub-tree.*/
	func(tree->n);

	/* Transverse the right sub-tree last.*/
	binary_tree_inorder(tree->right, func);
}
