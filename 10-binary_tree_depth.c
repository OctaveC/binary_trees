#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node which we want the depth of
 *
 * Return: If tree is NULL, 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	while (tree)
	{
		tree = tree->parent;
		i++;
	}
	i = i - 1;
	return (i);
}
