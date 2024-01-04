#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = 0;
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	r = 0;
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	if (l > r)
		return (l);
	return (r);
}
