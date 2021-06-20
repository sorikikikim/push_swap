#include "push_swap.h"

t_node *create_node(int data)
{
	t_node *temp;

	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		return (0);
	temp->data = data;
	temp->prev = NULL;
	temp->next = NULL;
	return (temp);
}

t_linked_list *create_linked_list(t_node node)
{
	t_linked_list *ret;

	ret= malloc(sizeof(t_linked_list));
	ret->head = 0;
	ret->size = 0;
	return (ret);
}

void add_node_first(t_node *head, int data)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head->next == NULL)
	{
		new_node->prev = head;
		new_node->next = NULL;
		head->prev = NULL;
		head->data = 0;
		head->next = new_node;
	}
	else
	{
		new_node->prev = head;
		new_node->next = head->next;
		head->next->prev = new_node;
		head->next = new_node;
	}
}

void add_node_last(t_node *node, int data)
{
	t_node *new_node;
	t_node *curr;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (node->next == NULL)
	{
		new_node->prev = node;
		new_node->next = NULL;
		node->data = 0;
		node->prev = NULL;
		node->next = new_node;
	}
	else
	{
		curr = node;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
		new_node->prev = curr;
	}
}
