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
void	quick_sort_2(t_stack *stack, int left, int right)
{
	int pivot;
	int i;
	int j;
	t_node *left_node;
	t_node *right_node;

	if (left >= right) //원소가 1개인 경우 그대로 두기
		return ;
	pivot = left; //pivot는 첫번째 원소
	i = left + 1;
	j = right;
	left_node = stack->top;
	right_node = stack->top->prev;
	while (i <= j) //엇갈릴 때까지 반복
	{
		while (i <= right && find_node(stack, i) <= find_node(stack, pivot)) //pivot 값보다 큰 값을 만날 때
		{
			i++;
			left_node = left_node->next;
		}
		while (j > left && find_node(stack, j) >= find_node(stack, pivot)) // pivot 값보다 작은 값을 만날 때
		{
			j--;
			right_node = right_node->prev;
		}
		if (i > j) //현재 엇갈린 상태면 pivot 값과 교체
			swap_node(&stack->top->value, &right_node->value);
		else
			swap_node(&left_node->value, &right_node->value);
	}
	quick_sort_2(stack, left, j - 1);
	quick_sort_2(stack, j + 1, right);
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
