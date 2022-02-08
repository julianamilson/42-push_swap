/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:25:03 by jmilson-          #+#    #+#             */
/*   Updated: 2022/02/01 14:42:47 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// t_push_swap	psh_swp;

	valid_amount(argc);
	valid_type(argv);
	int i = 0;
	while (argv[i])
	{
		ft_putendl_fd(argv[i], 1);
		i++;
	}
	return (0);
}

/*
TO DO

0. Is it only number?
1. Repeated numbers?
2. Is sorted?
3. Is int?
*/

