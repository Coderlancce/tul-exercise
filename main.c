#include "binary_trees.h"


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
    int result = binary_tree_is_bst(root);

    if (result)
        printf("El árbol binario es un BST.\n");
    else
        printf("El árbol binario no es un BST.\n");

    /* Liberar la memoria del árbol */
    binary_tree_delete(root);

    return (0);
}
