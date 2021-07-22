#include "binary_trees.h"
/**
 * binary_tree_levelorder - Goes through a binary tree using
 * level-order traversal.
 * @tree: tree we're going to traverse
 * @func: function we're using
 *
 * Return: If node or tree is NULL, returns NULL
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *placeholder;
	binary_tree_t *buffer[1024];
	int ite = 0, ite2 = 0;

	if (tree == NULL || func == NULL)
		return;

	for (ite = 0; ite < 1024; ite++)
		buffer[ite] = NULL;

	buffer[0] = (binary_tree_t *)tree;

	for (ite = 0; buffer[ite] != NULL; ite++)
	{
		placeholder = buffer[ite];
		func(placeholder->n);
		if (placeholder->left != NULL)
		{
			ite2++;
			buffer[ite2] = placeholder->left;
		}
		if (placeholder->right != NULL)
		{
			ite2++;
			buffer[ite2] = placeholder->right;
		}
	}
}
