/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:25:03 by jmilson-          #+#    #+#             */
/*   Updated: 2022/01/18 10:36:35 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	valid_amount(argc);
	valid_type(argv[1]);

	int i = 0;
	while (argv[i])
	{
		ft_putendl_fd(argv[i], 1);
		i++;
	}
	return (0);
}
