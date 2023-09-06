#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if it's a valid BST, 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
    return is_binary_search_tree(tree, INT_MIN, INT_MAX);
}
