/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:36:18 by alejango          #+#    #+#             */
/*   Updated: 2023/08/16 21:57:39 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(int c, int flag)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c <= 0 && flag == 0)
		c += 256;
	if (c >= 16)
	{
		ft_dec_to_hex(c / 16, 1);
		ft_dec_to_hex(c % 16, 1);
	}
	else
	{
		if (flag == 0)
			ft_putchar('0');
		ft_putchar(hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_dec_to_hex(j, 0);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
