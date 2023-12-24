/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:58:18 by ydunay            #+#    #+#             */
/*   Updated: 2023/12/24 21:58:19 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int	*ft_reverse_arr(int arr_len, int *arr)
{
	int	i;
	int	temp;

	i = 0;
	while (i < arr_len / 2)
	{
		temp = arr[i];
		arr[i] = arr[arr_len - i - 1];
		arr[arr_len - i - 1] = temp;
		i++;
	}
	return (arr);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	ft_min_num(int num1, int num2)
{
	if (ft_abs(num1) < ft_abs(num2))
		return (num1);
	return (num2);
}

static int	ft_is_white_space(char x)
{
	return (x == 32 || x == 9 || x == 10 || x == 11 || x == 12 || x == 13);
}

void	ft_is_full_whsp(int arc, char **params)
{
	int	i;
	int	j;

	i = 0;
	while (++i < arc)
	{
		if (params[i][0] == '\0')
		{
			if (arc == 2)
				exit(0);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	i = 0;
	while (++i < arc)
	{
		j = -1;
		while (params[i][++j])
		{
			if (!ft_is_white_space(params[i][j]))
				return ;
		}
	}
	exit(0);
}
