#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child in a binary tree
 * @tree: head pointer
 * Return: integer
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t i = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		i++;
	if (tree->right)
		i += binary_tree_nodes(tree->right);
	if (tree->left)
		i += binary_tree_nodes(tree->left);
	return (i);
}