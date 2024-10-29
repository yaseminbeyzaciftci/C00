/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:04:36 by yaciftci          #+#    #+#             */
/*   Updated: 2024/07/04 19:16:49 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	digit;

	number = 0;
	while (number <= 9)
	{
		digit = number + '0';
		write(1, &digit, 1);
		number++;
	}
}
