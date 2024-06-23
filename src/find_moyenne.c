/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_moyenne.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:14:19 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/18 01:47:52 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	find_moyenne(t_Liste *liste)
{
	t_Element	*actuel;
	int			moyenne;
	int			nbr;

	moyenne = 0;
	nbr = 0;
	actuel = liste->premier;
	while (actuel)
	{
		moyenne += actuel->number;
		actuel = actuel->suivant;
		nbr++;
	}
	liste->moyenne = moyenne / nbr;
}
