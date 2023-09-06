#include "binary_trees.h"

/**
 * is_binary_search_tree - Checks if a binary tree is a valid BST.
 *
 * @node: Current node being checked.
 * @min: Minimum allowed value for the current node.
 * @max: Maximum allowed value for the current node.
 *
 * Return: true if it's a valid BST, false otherwise.
 */
bool is_binary_search_tree(const binary_tree_t *node, int min, int max)
{
    if (node == NULL)
        return true; // An empty tree is a valid BST

    if (node->n < min || node->n > max)
        return false; // Doesn't satisfy BST properties

    // Recursively check the left and right subtrees
    return is_binary_search_tree(node->left, min, node->n - 1) &&
           is_binary_search_tree(node->right, node->n + 1, max);
}
