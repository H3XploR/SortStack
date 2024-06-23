/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lower_rank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:07:46 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/21 23:43:16 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	lower_instruction(t_Element *element)
{
	int	lower;

	lower = 0;
	lower = element->instruction;
	element->wich_instr = 0;
	if (lower > element->instruction_ra)
	{
		lower = element->instruction_ra;
		element->wich_instr = 1;
	}
	if (lower > element->instruction_rb)
	{
		lower = element->instruction_rb;
		element->wich_instr = 2;
	}
	if (lower > element->instruction_rab)
	{
		lower = element->instruction_rab;
		element->wich_instr = 3;
	}
	return (lower);
}

void	find_lower_rank(t_Liste *stack)
{
	t_Element	*actuel;

	actuel = stack->premier;
	stack->lower_rank = actuel;
	while (actuel)
	{
		if (lower_instruction(actuel) < lower_instruction(stack->lower_rank))
			stack->lower_rank = actuel;
		actuel = actuel->suivant;
	}
}
