/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:09:59 by jmilson-          #+#    #+#             */
/*   Updated: 2022/02/13 23:10:02 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoli(const	char *str)
{
	long int	result;
	long int	signal;
	int			index;

	index = 0;
	result = 0;
	signal = 1;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			signal = -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	return (result * signal);
}
