#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_t - Creates a binary tree node
 * @binary_tree_t: Pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_s* new;
new = malloc(sizeof(binary_tree_t *parent));
if (new == NULL)
return (NULL);
new->n = value;
new->left = NULL;
new->right = NULL;
new->parent = parent;
return (new);
}