#include "binary_trees.h"

/**
 * is_binary_search_tree - Checks if a binary tree is a valid BST.
 *
 * @node: Current node being checked.
 * @min: Minimum allowed value for the current node.
 * @max: Maximum allowed value for the current node.
 *
 * Return: 1 if it's a valid BST, 0 otherwise.
 */
int is_binary_search_tree(const binary_tree_t *node, int min, int max)
{
    if (node == NULL)
        return 1; // An empty tree is a valid BST

    if (node->n < min || node->n > max)
        return 0; // Doesn't satisfy BST properties

    // Recursively check the left and right subtrees
    return is_binary_search_tree(node->left, min, node->n - 1) &&
           is_binary_search_tree(node->right, node->n + 1, max);
}
