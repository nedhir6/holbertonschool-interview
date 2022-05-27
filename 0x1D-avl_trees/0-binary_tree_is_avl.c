#include "binary_trees.h"

/**
 * is_valid_avl - checks wether tree is avl
 * @tree: head
 * @min: minimun
 * @max: maximun
 * @height: height
 * Return: 1 or 0
 */
int is_valid_avl(const binary_tree_t *tree, int min, int max, int *height)
{
int  value1, value2, x = 0, y = 0;
if (tree == NULL)
return (1);

if (tree->n <= min || tree->n >= max)
return (0);

value1 = is_valid_avl(tree->left, min, tree->n, &x);
value2 = is_valid_avl(tree->right, tree->n, max, &y);

if (value1 == 0 || value2 == 0)
return (0);

if (x > y)
*height = x + 1;
else
*height = y + 1;

if (abs(x - y) > 1)
return (0);

return (1);
}
/**
 * binary_tree_is_avl - chrcks wether tree is AVltree
 * @tree: head
 * Return: 1 or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
int height = 0;

if (tree == NULL)
return (0);

return (is_valid_avl(tree, INT_MIN, INT_MAX, &height));
}
