/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:15:12 by yantoine          #+#    #+#             */
/*   Updated: 2024/04/26 15:14:46 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	manage_arg(t_Liste *stack_a, int argc, char **argv)
{
	if (argc == 2)
	{
		if (!parse_arg(stack_a, argv[1]))
			return (0);
	}
	else
	{
		if (!parse_args(stack_a, argc, argv))
			return (0);
	}
	list_lenght(stack_a);
	return (1);
}

static t_Liste	*init_stacks(t_Liste *stack_a)
{
	stack_a = malloc(sizeof(t_Liste));
	if (!stack_a)
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	stack_a->premier = NULL;
	stack_a->length = 0;
	stack_a->moyenne = 0;
	stack_a->lower_rank = NULL;
	return (stack_a);
}

static void	anti_25_ligne(t_Liste *stack_a, t_Liste *stack_b)
{
	if (!is_sorted(stack_a))
	{
		if (stack_a->length == 2)
			swap(stack_a, 'a');
		else if (stack_a->length == 3)
			sort_3(stack_a);
		else if (stack_a->length == 4)
			sort_4(stack_a, stack_b);
		else if (stack_a->length == 5)
			sort_5(stack_a, stack_b);
		else
			turc(stack_a, stack_b);
	}
}

int	main(int argc, char **argv)
{
	t_Liste	*stack_a;
	t_Liste	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = init_stacks(stack_a);
	stack_b = init_stacks(stack_b);
	if (argc < 2 || !manage_arg(stack_a, argc, argv))
	{
		free_stack(stack_a, stack_b);
		if (argc != 1)
			write(2, "Error\n", 6);
		return (0);
	}
	assign_param_list(stack_a);
	anti_25_ligne(stack_a, stack_b);
	free_stack(stack_a, stack_b);
	return (0);
}
