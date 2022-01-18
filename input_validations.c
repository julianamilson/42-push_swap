/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:59:25 by jmilson-          #+#    #+#             */
/*   Updated: 2022/01/18 10:37:39 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_amount(int arg)
{
	if (arg < 2)
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd("Missing arguments", 2);
		exit(1);
	}
	if (arg > 2)
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd("Too many arguments", 2);
		exit(1);
	}
}

void	valid_type(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
		{
			if ((arg[i]) != ' ')
			{
				ft_putendl_fd("Error", 2);
				ft_putendl_fd("Only numbers can be sorted", 2);
				exit(1);
			}
		}
		i++;
	}
}
