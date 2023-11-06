/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:01:50 by alejango          #+#    #+#             */
/*   Updated: 2023/08/16 21:56:23 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] <= 'Z' && str[indice] >= 'A')
			str[indice] += 32;
		indice += 1;
	}
	return (str);
}
