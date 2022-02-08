/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:59:25 by jmilson-          #+#    #+#             */
/*   Updated: 2022/02/01 15:38:31 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_amount(int arg)
{
	if (arg < 2)
		warning("Missing arguments", 1);
	if (arg == 2)
		warning("Too few arguments", 1);
}

void	valid_type(char **arg)
{
	int	i;
	int	j;

	i = 1;
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (!ft_isdigit(arg[i][j]))
				if (arg[i][j] != '-' && arg[i][j] != '+')
					warning("Only numbers can be sorted", 1);
			j++;
		}
		i++;
	}
}
