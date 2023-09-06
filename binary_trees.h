#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

/**
* struct binary_tree_s - Binary tree node
*
* @n: integer sorted in the node
* @parent: pointer to parent node
* @left: pointer to left child node
* @right: pointer to rigth child node
*/

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
bool is_binary_search_tree(const binary_tree_t *node, int min, int max);
int binary_tree_is_bst(const binary_tree_t *tree);
void binary_tree_delete(binary_tree_t *tree);

#endif /*BINARY_TREES_H*/
