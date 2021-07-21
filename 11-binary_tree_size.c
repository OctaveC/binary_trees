#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: pointer to the root node
 *
 * Return: If tree is NULL, 0
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	if (tree->right)
	{
		i += binary_tree_size(tree->right);
	}
	if (tree->left)
	{
		i += binary_tree_size(tree->left);
	}
	return (1 + i);
}
