#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of the DLL
 * @head: pointer to the head of the DLL
 * @n: integer data of the new node
 * Return: returns the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
