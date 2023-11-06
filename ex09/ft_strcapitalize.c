/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:20:13 by alejango          #+#    #+#             */
/*   Updated: 2023/08/16 21:51:57 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_lower_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_upper_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_printable(char c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{	
	int	index;	
	int	flag;

	index = 0;
	flag = 0;
	while (str[index] != '\0')
	{
		if (flag == 0 && is_lower_alpha(str[index]))
		{
			str[index] -= 32;
			flag += 1;
		}
		else if (flag > 0 && is_upper_alpha(str[index]))
			str[index] += 32;
		else if (!is_printable(str[index]))
			flag = 0;
		else
			flag += 1;
		index += 1;
	}
	return (str);
}
