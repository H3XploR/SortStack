/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:14:47 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/23 23:05:29 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"
/*
void	print_stacks(t_Liste *stack_a, t_Liste *stack_b)
{
	t_Element	*actuel_a;
	t_Element	*actuel_b;

	actuel_a = stack_a->premier;
	actuel_b = stack_b->premier;
	printf("\n");
	printf("\n");
	while (actuel_a || actuel_b)
	{
		if (actuel_a)
		{
			printf("instruction %d__", actuel_a->instruction);
			printf("%d__", actuel_a->instruction_ra);
			printf("%d__", actuel_a->instruction_rb);
			printf("%d__|", actuel_a->instruction_rab);
			printf("%ld	", actuel_a->number);
			actuel_a = actuel_a->suivant;
		}
		else
			printf("  ");
		if (actuel_b)
		{
			printf("%ld\n", actuel_b->number);
			actuel_b = actuel_b->suivant;
		}
		else
			printf("\n");
	}
	printf("\n");
}
*/
static void	wich_algo(t_Liste *stack_a, t_Liste *stack_b)
{
	if (stack_a->lower_rank->wich_instr == 0)
	{
		normal_trie(stack_a, stack_b);
	}
	else if (stack_a->lower_rank->wich_instr == 1)
	{
		reverse_a_trie(stack_a, stack_b);
	}
	else if (stack_a->lower_rank->wich_instr == 2)
	{
		reverse_b_trie(stack_a, stack_b);
	}
	else
	{
		reverse_ab_trie(stack_a, stack_b);
	}
}

static void	anti_25_ligne(t_Liste *stack_a, t_Liste *stack_b, long length)
{
	while (stack_a->length > 1)
	{
		find_quicker(stack_a, stack_b);
		wich_algo(stack_a, stack_b);
	}
	if (stack_b->premier->number >= stack_b->moyenne)
	{
		while (stack_b->premier->number != stack_b->max)
			rotate(stack_b, 'b');
	}
	else
	{
		while (stack_b->premier->number != stack_b->max)
			reverse_rotate(stack_b, 'b');
	}
	while (stack_a->length != length)
	{
		if (stack_a->dernier->number > stack_b->premier->number \
			&& stack_a->dernier->number < stack_a->premier->number)
			reverse_rotate(stack_a, 'a');
		push(stack_a, stack_b, 'a');
	}
}

void	turc(t_Liste *stack_a, t_Liste *stack_b)
{
	long	length;

	length = stack_a->length;
	push_two_number(stack_a, stack_b);
	anti_25_ligne(stack_a, stack_b, length);
}
