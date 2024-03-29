#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value
 *
 * Return: Pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
