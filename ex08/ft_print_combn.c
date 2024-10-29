/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:21:29 by yaciftci          #+#    #+#             */
/*   Updated: 2024/07/05 11:31:12 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int start, int index, int *arr)
{
	int	i;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		if (arr[0] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = start;
	while (i <= 9)
	{
		arr[index] = i;
		ft_print_combn_recursive(n, i + 1, index + 1, arr);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	ft_print_combn_recursive(n, 0, 0, arr);
}
