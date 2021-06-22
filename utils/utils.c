#include "push_swap.h"

int count_element(char **element)
{
	int i;

	i = 0;
	while (element[i])
		i++;
	return (i);
}