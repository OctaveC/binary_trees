#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: pointer to the root node
 *
 * Return: If tree is NULL, 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    binary_tree_t *left_tree, *right_tree;
    int height_r, height_l;
    int l_score, r_score;

    if (tree == NULL)
        return (0);

    if (binary_tree_is_leaf_3(tree))
        return (1);

    left_tree = tree->left;
    right_tree = tree->right;

    if (left_tree == NULL || right_tree == NULL)
        return (0);

    height_l = binary_tree_height_2(left_tree);
    height_r = binary_tree_height_2(right_tree);

    if (height_l == height_r)
    {
        l_score = binary_tree_is_perfect(left_tree);
        r_score = binary_tree_is_perfect(right_tree);
        if (l_score == 0 || r_score == 0)
            return (1);
    }
    return (0);
}

/**
 * binary_tree_is_leaf_3 - Checks if a node is a leaf.
 * @node: pointer to the node to check
 *
 * Return: 0 or 1
 */

int binary_tree_is_leaf_3(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (node->left || node->right)
        return (0);
    else
        return (1);
}

/**
 * binary_tree_height_2 - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree we want the height of
 *
 * Return: If tree is NULL, nothing
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
    int height_l, height_r;

    if (binary_tree_is_leaf_3(tree) || tree == NULL)
        return (0);

    height_l = binary_tree_height_2(tree->left);
    height_r = binary_tree_height_2(tree->right);

    if (height_l >= height_r)
        return (height_l + 1);
    else
        return (height_r + 1);
}
