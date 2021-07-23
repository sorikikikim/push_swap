#include "push_swap.h"

//void	set_pivot(t_stack *a, t_stack *b)
//{
//	
//}

void swap_node(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}



//void quick_sort(t_node *top, t_node *bottom, int left, int right)
//{
//	int i;
//	int j;
//	t_node* l_node;
//	t_node* r_node;
//	t_node* r_next;
//	t_node* dump;
//
//	if (left >= right)
//		return ;
//	i = left;
//	j = right + 1;
//	l_node = top;
//	r_node = bottom;
//	r_next = bottom->next;
//	dump = (t_node*)malloc(sizeof(t_node));
//	r_node->next = dump;
//	dump->prev = r_node;
//	r_node = r_node->next;
//	while (i < j) {
//		do { 
//			i++; 
//			l_node = l_node->next;
//		} while (i <= right && l_node->value < top->value);
//		do { 
//			j--;
//			r_node = r_node->prev;
//		} while (j > left && r_node->value > top->value);
//		if (i < j) mySwap(&l_node->value, &r_node->value);
//	}
//	mySwap(&top->value, &r_node->value);
//	free(dump);
//	bottom->next = r_next;
//
//	quick_sort(top, r_node->prev, left, j - 1);
//	quick_sort(r_node->next, bottom, j + 1, right);
//}
//
//t_node *quicksort_list(t_node *top, t_node *tail, int size)
////{
//	goQuickSort(head, tail, 0, size - 1);
//	return head;
//}
