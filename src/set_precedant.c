/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_precedant.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:22:29 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/21 23:48:37 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	set_precedant(t_Liste *liste)
{
	t_Element	*actuel;
	t_Element	*precedant;

	actuel = liste->premier;
	while (actuel)
	{
		precedant = actuel;
		actuel = actuel->suivant;
		if (!actuel)
			break ;
		actuel->precedant = precedant;
		actuel->precedant_boucle = precedant;
		if (actuel->suivant == NULL)
			break ;
	}
	liste->premier->precedant = NULL;
	liste->premier->precedant_boucle = liste->dernier;
}
