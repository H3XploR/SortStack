/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_param_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:51:13 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/20 13:26:37 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	assign_param_list(t_Liste *liste)
{
	if (!liste->premier)
		return ;
	list_lenght(liste);
	list_index(liste);
	find_min(liste);
	find_max(liste);
	find_last(liste);
	find_moyenne(liste);
	set_precedant(liste);
}
