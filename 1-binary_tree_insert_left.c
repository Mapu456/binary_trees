#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function to insert a new node as
 * the left-child of another node.
 * @parent: parent node.
 * @value: integer value of a new node.
 * Return: new node (Success) NULL (Failure)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;

		parent->left->parent = new_node;

	}
	new_node->parent->left = new_node;

	return (new_node);
}
