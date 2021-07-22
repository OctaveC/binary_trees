#include "binary_trees.h"
/**
 * binary_tree_is_bst - Checks if a binary tree is a valid
 * Binary Search Tree.
 * @tree: tree we're going to check
 *
 * Return: If node or tree is NULL, returns NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bst_recu((binary_tree_t *)tree, INT_MIN, INT_MAX));
}

/**
 * bst_recu - Recursive checker.
 * @tree: pointer to node
 * @min: INT_MIN
 * @max: INT_MAX
 *
 * Return: 1 or 0
 */
int bst_recu(binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (bst_recu(tree->left, min, tree->n - 1) &&
		bst_recu(tree->right, tree->n + 1, max));
}
