/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:56:21 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/16 15:31:57 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_nbr **stack_a, t_nbr **stack_b)
{

}

int	main(int ac, char **av)
{
	t_nbr	**stack_a;
	t_nbr	**stack_b;

	if (ac < 2)
		error();
	stack_a = (t_nbr **)malloc(sizeof(t_nbr *));
	stack_b = (t_nbr **)malloc(sizeof(t_nbr *));
	*stack_a = NULL;
	*stack_b = NULL;
	push_swap(stack_a, stack_b);

}
