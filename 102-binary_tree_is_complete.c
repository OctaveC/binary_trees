#include "binary_trees.h"
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: tree we're going to traverse
 *
 * Return: If node or tree is NULL, returns NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nodes, checko;

	if (tree == NULL)
		return (0);

	nodes = binary_tree_size(tree);
	checko = check((binary_tree_t *)tree, 0, nodes);

	if (checko == 1)
		return (1);
	else
		return (0);
}

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

/**
* check - Recursive that checks if tree is complete.
* @tree: tree we're going to traverse
* @index: index we're at
* @nodes: size of the tree
*
* Return: height
*/

int check(binary_tree_t *tree, int index, int nodes)
{
	if (!tree)
		return (1);

	if (index >= nodes)
		return (0);

	return (check(tree->left, 2 * index + 1, nodes) &&
		check(tree->right, 2 * index + 2, nodes));
}
