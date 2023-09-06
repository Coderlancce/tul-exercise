#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
int binary_tree_is_perfect(const binary_tree_t *tree);
void binary_tree_delete(binary_tree_t *tree);


int main(void) {
    /* Crear un árbol binario que no es un BST */
    binary_tree_t *root = binary_tree_node(NULL, 4);
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 6);
    root->left->left = binary_tree_node(root->left, 1);
    root->left->right = binary_tree_node(root->left, 3);
    root->right->left = binary_tree_node(root->right, 7); // Nodo incorrecto
    root->right->right = binary_tree_node(root->right, 7); // Nodo incorrecto

    /* Verificar si el árbol es un BST */
    int result = binary_tree_is_perfect(root);

    if (result)
        printf("El árbol binario es un BST.\n");
    else
        printf("El árbol binario no es un BST.\n");

    /* Liberar la memoria del árbol */
    binary_tree_delete(root);

    return (0);
}


void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}

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
