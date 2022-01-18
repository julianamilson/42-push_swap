/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:59:25 by jmilson-          #+#    #+#             */
/*   Updated: 2022/01/18 15:17:33 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_amount(int arg)
{
	if (arg < 2)
		warning("Missing arguments", 1);
	if (arg > 2)
		warning("Too many arguments", 1);
}

void	valid_type(char *arg)
{
	int is_empty;

	is_empty = 0;
	while (*arg)
	{
		if (!ft_isdigit(*arg))
		{
			if ((*arg) != ' ')
				warning("Only numbers can be sorted", 1);
		}
		if (ft_isdigit(*arg))
			is_empty++;
		arg++;
	}
	if (is_empty == 0)
		warning("Empty argument", 1);
}
