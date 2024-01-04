#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count the number of leaves
 *
 * Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		n++;
	else
	{
		n += binary_tree_leaves(tree->left);
		n += binary_tree_leaves(tree->right);
	}
	return (n);
}
