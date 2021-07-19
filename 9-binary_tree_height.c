#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree we want the height of
 *
 * Return: If tree is NULL, nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    int height_l, height_r;

    if (binary_tree_is_leaf_2(tree) || tree == NULL)
        return (0);

    height_l = binary_tree_height(tree->left);
    height_r = binary_tree_height(tree->right);

    if (height_l >= height_r)
        return (height_l + 1);
    else
        return (height_r + 1);
}

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: pointer to the node to check
 *
 * Return: 0 or 1
 */

int binary_tree_is_leaf_2(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (node->left || node->right)
        return (0);
    else
        return (1);
}
