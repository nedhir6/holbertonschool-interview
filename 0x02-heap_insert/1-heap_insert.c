#include "binary_trees.h"
#include <stdio.h>
/**
 * heap_insert - inserts a value into a max binary heap
 * @root: double pointer to the root node of the Heap
 * @value: value to store in the node to be inserted
 * Return: pointer to inserted node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
heap_t *new;
if (root == NULL)
return (NULL);
if (*root == NULL)
{
new = binary_tree_node(*root, value);
*root = new;
}
else
{
new = insert_eoh(root, value);
heapify(new);
}
return (new);
}

/**
 * insert_eoh - inserts a value at the end of heap
 * @root: double pointer to the root node of the Heap
 * @value: value to store in the node to be inserted
 * Return: pointer to inserted node, or NULL on failure
 */
heap_t *insert_eoh(heap_t **root, int value)
{
heap_t *node = *root;
heap_t *new;


if(node->left == NULL)
{
new = binary_tree_node(node, value);
node->left = new;
return (new);
}
else if (node->right == NULL)
{
new = binary_tree_node(node, value);
node->right = new;
return (new);
}
new = insert_eoh(&node->left, value);
return(new);
}

/**
 * heapify - Compare the inserted node with its parent.
 * If the newly inserted node is larger, swap it with its parent.
 * @node: newly inserted node
 * Return: NULL
 */
void heapify(heap_t *node)
{
int tmp;
if (node->n < node->parent->n)
return;
{
tmp = node->n;
node->n = node->parent->n;
node->parent->n = tmp;
heapify(node);
}
}

