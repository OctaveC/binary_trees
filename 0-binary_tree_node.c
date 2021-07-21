#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);
	tree->left = NULL;
	tree->right = NULL;
	tree->parent = parent;
	tree->n = value;
	return (tree);
}
