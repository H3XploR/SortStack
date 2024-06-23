/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_trie.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:47:09 by yantoine          #+#    #+#             */
/*   Updated: 2024/04/26 16:47:10 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	normal_trie(t_Liste *stack_a, t_Liste *stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	while (stack_a->premier != stack_a->lower_rank \
		&& stack_b->premier->number != stack_a->lower_rank->ptr_num)
		rotate_both(stack_a, stack_b);
	while (stack_a->premier != stack_a->lower_rank)
		rotate(stack_a, 'a');
	while (stack_b->premier->number != stack_a->lower_rank->ptr_num)
		rotate(stack_b, 'b');
	push(stack_a, stack_b, 'b');
}

void	reverse_a_trie(t_Liste *stack_a, t_Liste *stack_b)
{
	while (stack_a->premier != stack_a->lower_rank)
		reverse_rotate(stack_a, 'a');
	while (stack_b->premier->number != stack_a->lower_rank->ptr_num)
		rotate(stack_b, 'b');
	push(stack_a, stack_b, 'b');
}

void	reverse_b_trie(t_Liste *stack_a, t_Liste *stack_b)
{
	while (stack_a->premier != stack_a->lower_rank)
		rotate(stack_a, 'a');
	while (stack_b->premier->number != stack_a->lower_rank->ptr_num)
		reverse_rotate(stack_b, 'b');
	push(stack_a, stack_b, 'b');
}

void	reverse_ab_trie(t_Liste *stack_a, t_Liste *stack_b)
{
	while (stack_a->premier != stack_a->lower_rank \
		&& stack_b->premier->number != stack_a->lower_rank->ptr_num)
		reverse_rotate_both(stack_a, stack_b);
	while (stack_a->premier != stack_a->lower_rank)
		reverse_rotate(stack_a, 'a');
	while (stack_b->premier->number != stack_a->lower_rank->ptr_num)
		reverse_rotate(stack_b, 'b');
	push(stack_a, stack_b, 'b');
}
