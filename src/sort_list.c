/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:58:09 by ydunay            #+#    #+#             */
/*   Updated: 2023/12/24 21:58:10 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sort_three_nums(t_stacks *st)
{
	int max;

	max = ft_find_max_num(st->a_len, st->stack1);
	if (st -> stack1[2] == max)
	    ra(st, 1);
	else if (st -> stack1[1] == max)
		rra(st, 1);
	if (st -> stack1[2] > st -> stack1[1])
		sa(st);
}

static void	ft_push_b(t_stacks *st, int step_a, int step_b)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (step_a < 0)
		while (++i < ft_abs(step_a))
			rra(st, 1);
	else if (step_a > 0)
		while (++i < ft_abs(step_a))
			ra(st, 1);
	if (step_b < 0)
		while (++j < ft_abs(step_b))
			rrb(st, 1);
	else if (step_b > 0)
		while (++j < ft_abs(step_b))
			rb(st, 1);
	pb(st);
}

int	ft_find_corr_ind(int num, int arr_len, int *arr)
{
	int		i;
	int		cn_index;
	long	min_diff;

	i = 0;
	cn_index = 0;
	min_diff = 2147483648 * 2;
	while (i < arr_len)
	{
		if (min_diff > ft_abs(arr[i] - num))
		{
			cn_index = i;
			min_diff = ft_abs(arr[i] - num);
		}
		i++;
	}
	return (cn_index);
}

static void	ft_push_min_step_b(t_stacks *st, int i, int j)
{
	long	min_step_count;
	int		total_step_count;
	int		step_acount;
	int		step_bcount;

	min_step_count = 2147483648 * 2;
	i = st->a_len - 1;
	while (st->a_len > 0 && i >= 0)
	{
		j = ft_find_corr_ind(st->stack1[i], st->b_len, st->stack2);
		total_step_count = ft_abs(ft_min_num(st->a_len - i - 1, -i - 1));
		total_step_count += ft_abs(ft_min_num(st->b_len - j - 1, -j - 1));
		if (min_step_count > total_step_count)
		{
			step_acount = ft_min_num(st->a_len - i - 1, -i - 1);
			step_bcount = ft_min_num(st->b_len - j - 1, -j - 1);
			min_step_count = total_step_count;
			if (st->stack1[i] < st->stack2[j])
				step_bcount++;
		}
		i--;
	}
	ft_push_b(st, step_acount, step_bcount);
}

void	ft_sort_stack(t_stacks *st)
{
	int	i;
	int	rev_b_count;

	i = 0;
	while (st->a_len > 2 && i < 2)
	{
		pb(st);
		i++;
	}
	while (st->a_len > 0)
		ft_push_min_step_b(st, 0, 0);
	i = -1;
	rev_b_count = ft_find_min_num_index(st->b_len, st->stack2);
	while (++i < rev_b_count)
		rrb(st, 1);
	while (st->b_len > 0)
		pa(st);
}
