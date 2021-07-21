#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: pointer to the root node
 *
 * Return: If tree is NULL, 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    int l, r;

    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    l = binary_tree_is_full(tree->left);
    r = binary_tree_is_full(tree->right);
    if (l == 0 || r == 0)
        return (0);
    else
        return (1);
}
