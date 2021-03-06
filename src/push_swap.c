/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:00:19 by jmilson-          #+#    #+#             */
/*   Updated: 2022/02/13 23:00:20 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stacks *stacks)
{
	if (stacks->stack_size <= 3)
		sort_three(stacks);
	else if (stacks->stack_size <= 5)
		sort_five(stacks);
	else
		big_sort(stacks);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc >= 2)
	{
		if (validate_input(&stacks, argc, argv) == 1)
		{
			if (!is_sorted_asc(stacks.stack_a))
			{
				sort(&stacks);
			}
			free_stacks(&stacks);
		}
	}
	return (0);
}
