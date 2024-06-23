/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_quicker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:31:16 by yantoine          #+#    #+#             */
/*   Updated: 2024/04/29 11:10:44 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"
//faire pour moyenne haute et moyenne basse

static void	boucle(t_Liste *stack_a, t_Liste *stack_b)
{
	int				i;
	int				j;
	t_Element		*actuel_a;
	t_Element		*actuel_b;

	i = 0;
	actuel_a = stack_a->premier;
	while (actuel_a)
	{
		j = 0;
		actuel_b = stack_b->premier;
		while (actuel_b)
		{
			if (condition(actuel_a, actuel_b, stack_b))
			{
				actuel_a->instruction = j + i ;
				actuel_a->ptr_num = actuel_b->number;
			}
			actuel_b = actuel_b->suivant;
			j++;
		}
		actuel_a = actuel_a->suivant;
		i++;
	}
}

static void	boucle_inverse_a(t_Liste *stack_a, t_Liste *stack_b)
{
	int				i;
	int				j;
	t_Element		*actuel_a;
	t_Element		*actuel_b;

	i = 0;
	actuel_a = stack_a->dernier;
	while (actuel_a)
	{
		j = 0;
		actuel_b = stack_b->premier;
		while (actuel_b)
		{
			if (condition(actuel_a, actuel_b, stack_b))
			{
				actuel_a->instruction_ra = j + i;
				actuel_a->ptr_num = actuel_b->number;
			}
			actuel_b = actuel_b->suivant;
			j++;
		}
		actuel_a = actuel_a->precedant;
		i++;
	}
}

static void	boucle_inverse_b(t_Liste *stack_a, t_Liste *stack_b)
{
	int				i;
	int				j;
	t_Element		*actuel_a;
	t_Element		*actuel_b;

	i = 0;
	actuel_a = stack_a->premier;
	while (actuel_a)
	{
		j = 0;
		actuel_b = stack_b->dernier;
		while (actuel_b)
		{
			if (condition(actuel_a, actuel_b, stack_b))
			{
				actuel_a->instruction_rb = j + i;
				actuel_a->ptr_num = actuel_b->number;
			}
			actuel_b = actuel_b->precedant;
			j++;
		}
		actuel_a = actuel_a->suivant;
		i++;
	}
}

static void	boucle_inverse_ab(t_Liste *stack_a, t_Liste *stack_b)
{
	int				i;
	int				j;
	t_Element		*actuel_a;
	t_Element		*actuel_b;

	i = 0;
	actuel_a = stack_a->dernier;
	while (actuel_a)
	{
		j = 0;
		actuel_b = stack_b->dernier;
		while (actuel_b)
		{
			if (condition(actuel_a, actuel_b, stack_b))
			{
				actuel_a->instruction_rab = j + i;
				actuel_a->ptr_num = actuel_b->number;
			}
			actuel_b = actuel_b->precedant;
			j++;
		}
		actuel_a = actuel_a->precedant;
		i++;
	}
}

void	find_quicker(t_Liste *stack_a, t_Liste *stack_b)
{
	boucle(stack_a, stack_b);
	boucle_inverse_a(stack_a, stack_b);
	boucle_inverse_b(stack_a, stack_b);
	boucle_inverse_ab(stack_a, stack_b);
	find_lower_rank(stack_a);
}
