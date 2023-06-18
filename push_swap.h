/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:20 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/16 10:01:51 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_nbr
{
	int				value;
	int				index;
	struct s_nbr	*next;
}				t_nbr;

void	error(void);
t_nbr	*ft_newnode(int nbr);
void	ft_add_front(t_nbr **stack, t_nbr *new);
void	ft_add_back(t_nbr **stack, t_nbr *new);
void	ft_delone(t_nbr *lst);
void	ft_clean(t_nbr **lst);

#endif
