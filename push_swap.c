/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:25:03 by jmilson-          #+#    #+#             */
/*   Updated: 2022/01/14 22:57:46 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd("Missing arguments", 2);
		return (1);
	}
	if (argc > 2)
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd("Too many arguments", 2);
		return (1);
	}
	int i = 0;
	while (argv[i])
	{
		ft_putendl_fd(argv[i], 1);
		i++;
	}
	return (0);
}
