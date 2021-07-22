#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Performs a left-rotation on a binary tree.
 * @tree: tree we're going to rotate
 *
 * Return: If node or tree is NULL, returns NULL
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rotato, *rotated;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		if (tree->n == (tree->parent->right && tree->parent->right->n))
			tree->parent->right = tree->left;
		else
			tree->parent->left = tree->left;
	}

	rotato = tree->left;
	rotato->parent = tree->parent;

	rotated = rotato->right;
	rotato->right = tree;

	tree->parent = rotato;
	tree->left = rotated;

	if (rotated)
		rotated->parent = tree;

	return (rotato);
}
