#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to root node of tree to measure the size.
 *
 * Return: The size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (!tree)
		return (n);
	n += 1;
	n += binary_tree_size(tree->left);
	n += binary_tree_size(tree->right);
	return (n);
}
