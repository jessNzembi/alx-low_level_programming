#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer
 * Return: address of ode where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	if (!head)
		return (NULL);
	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
