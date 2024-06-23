/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:42:02 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/23 23:04:24 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../lib/ft_printf/header/ft_printf.h"
# include "../lib/libft/libft.h"

typedef struct Element
{
	struct Element		*suivant;
	struct Element		*precedant;
	struct Element		*precedant_boucle;
	int					index;
	int					instruction;
	int					instruction_ra;
	int					instruction_rb;
	int					instruction_rab;
	int					wich_instr;
	int					ptr_num;
	long				number;
}	t_Element;

typedef struct Liste
{
	t_Element	*premier;
	t_Element	*dernier;
	t_Element	*lower_rank;
	int			max;
	int			min;
	int			length;
	int			moyenne;
}	t_Liste;

void			set_precedant(t_Liste *liste);
void			find_quicker(t_Liste *stack_a, t_Liste *stack_b);
void			turc(t_Liste *stack_a, t_Liste *stack_b);
void			push_two_number(t_Liste *stack_a, t_Liste *stack_b);
void			find_moyenne(t_Liste *liste);
void			sort_3(t_Liste *stack_a);
void			sort_4(t_Liste *stack_a, t_Liste *stack_b);
void			sort_5(t_Liste *stack_a, t_Liste *stack_b);
void			big_sort(t_Liste *stack_a, t_Liste *stack_b);
void			ft_list_push_back(t_Liste *liste, int valeur);

void			normal_trie(t_Liste *stack_a, t_Liste *stack_b);
void			reverse_a_trie(t_Liste *stack_a, t_Liste *stack_b);
void			reverse_b_trie(t_Liste *stack_a, t_Liste *stack_b);
void			reverse_ab_trie(t_Liste *stack_a, t_Liste *stack_b);

void			swap(t_Liste *liste, char c);
void			swap_both(t_Liste *stack_a, t_Liste *stack_b);
void			push(t_Liste *stack_a, t_Liste *stack_b, char c);
void			rotate(t_Liste *liste, char c);
void			rotate_both(t_Liste *stack_a, t_Liste *stack_b);
void			reverse_rotate(t_Liste *liste, char c);
void			reverse_rotate_both(t_Liste *stack_a, t_Liste *stack_b);

void			free_stack(t_Liste *stack_a, t_Liste *stack_b);
void			list_lenght(t_Liste *liste);
void			find_max(t_Liste *liste);
void			find_min(t_Liste *liste);
void			find_last(t_Liste *liste);
void			assign_param_list(t_Liste *liste);
void			print_stacks(t_Liste *stack_a, t_Liste *stack_b);
void			list_index(t_Liste *liste);
void			super_algo(t_Liste *stack_a, t_Liste *stack_b);
void			find_lower_rank(t_Liste *stack);

int				condition(t_Element *actuel_a, t_Element *actuel_b, \
					t_Liste *stack_b);
int				check_following(t_Liste *stack);
int				parse_arg(t_Liste *stack_a, char *arg);
int				parse_args(t_Liste *stack_a, int argc, char **argv);
int				is_sorted(t_Liste *liste);

t_Element		*ft_list_find(t_Liste *liste, int nb);

#endif
