#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * 
 * 
 * 
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
    if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
	
}