#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: root node.
 * Return: the height of the tree or 0 if there is no tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left = 0;
    size_t height_right = 0;

    /* If tree is NULL, height is 0 */
    if (!tree)
        return (0);

    /*
	* Start to go down the tree, first left-subtrees,
	* then right-subtrees and count +1 each time
	*/
    if (tree->left)
        height_left = binary_tree_height(tree->left) + 1;
    if (tree->right)
        height_right = binary_tree_height(tree->right) + 1;

    /*Return the maximum height found of the left and right sub-trees*/
    if (height_left >= height_right)
        return (height_left);
    return (height_right);
}
