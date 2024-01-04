#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value
 *
 * Return: Pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
