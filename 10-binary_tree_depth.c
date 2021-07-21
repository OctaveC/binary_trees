#include "binary_trees.h"

/**
*
*
*
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
