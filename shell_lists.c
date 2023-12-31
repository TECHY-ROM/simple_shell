#include "shell.h"

/**
 * len_list - Determines the length of a linked list.
 * @h: Pointer to the first node.
 *
 * Return: Size of the list.
 */
size_t len_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}

/**
 * list_strings - Returns an array of strings from the list->str field.
 * @head: Pointer to the first node.
 *
 * Return: Array of strings.
 */
char **list_strings(list_t *head)
{
	list_t *node = head;
	size_t m = len_list(head), n;
	char **strs;
	char *str;

	if (!head || !m)
		return (NULL);
	strs = malloc(sizeof(char *) * (m + 1));
	if (!strs)
		return (NULL);
	for (m = 0; node; node = node->next, m++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (n = 0; n < m; n++)
				free(strs[n]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[m] = str;
	}
	strs[m] = NULL;
	return (strs);
}

/**
 * list_print - Prints all elements of a list_t linked list.
 * @h: Pointer to the first node.
 *
 * Return: Size of the list.
 */
size_t list_print(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		_puts(convert_to_string(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		m++;
	}
	return (m);
}

/**
 * node_starts_with - Returns the node whose string starts with a prefix.
 * @node: Pointer to the list head.
 * @prefix: String to match.
 * @c: The next character after the prefix to match.
 *
 * Return: Matching node or NULL.
 */
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}

/**
 * node_index - Gets the index of a node.
 * @head: Pointer to the list head.
 * @node: Pointer to the node.
 *
 * Return: Index of the node or -1.
 */
ssize_t node_index(list_t *head, list_t *node)
{
	size_t m = 0;

	while (head)
	{
		if (head == node)
			return (m);
		head = head->next;
		m++;
	}
	return (-1);
}
