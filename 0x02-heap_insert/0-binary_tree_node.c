#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newn;
newn = malloc(sizeof(binary_tree_t));
if (newn == NULL)
return (NULL);
newn->n = value;
newn->parent = parent;
newn->left = NULL;
newn->right = NULL;
return (newn);
}
