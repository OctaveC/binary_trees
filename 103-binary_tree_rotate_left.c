#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 * @tree: tree we're going to rotate
 *
 * Return: If node or tree is NULL, returns NULL
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rotato, *rotated;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		if (tree->n == (tree->parent->right && tree->parent->right->n))
			tree->parent->right = tree->right;
		else
			tree->parent->left = tree->right;
	}

	rotato = tree->right;
	rotato->parent = tree->parent;

	rotated = rotato->left;
	rotato->left = tree;

	tree->parent = rotato;
	tree->right = rotated;

	if (rotated)
		rotated->parent = rotato;

	return (rotato);
}
