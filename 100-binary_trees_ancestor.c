#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the lowest common ancestor of two nodes.
 * @first: first pointer to a node which ancestor we seek
 * @second: second pointer to a node which ancestor we seek
 *
 * Return: If node or tree is NULL, returns NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *tree;

	if (second == NULL || first == NULL)
		return (NULL);

	tree = (binary_tree_t *)second;
	for (; first != NULL; first = first->parent)
	{
		for (; second != NULL; second = second->parent)
		{
			if (first == second)
				return ((binary_tree_t *)first);
		}
		second = tree;
	}
	return (NULL);
}
