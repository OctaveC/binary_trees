#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree we want the balance of
 *
 * Return: If tree is NULL, nothing
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_3(tree->left) - binary_tree_height_3(tree->right));
}

/**
 * binary_tree_height_3 - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree we want the height of
 *
 * Return: If tree is NULL, nothing
 */

size_t binary_tree_height_3(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height_3(tree->left);
	height_r = binary_tree_height_3(tree->right);

	if (height_l >= height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}
