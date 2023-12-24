/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:57:35 by ydunay            #+#    #+#             */
/*   Updated: 2023/12/24 21:57:36 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "pushswap.h"
#include <stdlib.h>

void	ft_print_error(t_stacks *st, int pst)
{
	if (st->a_len > 0)
		free(st -> stack1);
	if (st->b_len > 0)
		free(st -> stack2);
	if (pst >= 0)
		free(st);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_free_all(t_stacks *st, int fl)
{
	if (st->a_len > 0)
		free(st->stack1);
	if (st->b_len > 0)
		free(st->stack2);
	if (fl >= 0)
		free(st);
	exit(0);
}
