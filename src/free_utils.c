/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:58:42 by jmilson-          #+#    #+#             */
/*   Updated: 2022/02/13 22:58:44 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_doubly_list *stack)
{
	t_doubly_list	*aux;

	while (stack)
	{
		aux = stack->next;
		free(stack);
		stack = aux;
	}
}

void	free_stacks(t_stacks *stacks)
{
	if (stacks->stack_a)
		free_stack(stacks->stack_a);
	if (stacks->stack_b)
		free_stack(stacks->stack_b);
	if (stacks->max_values)
		free(stacks->max_values);
}
