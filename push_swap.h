/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:25:17 by jmilson-          #+#    #+#             */
/*   Updated: 2022/02/01 15:35:58 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>

# define INT_MAX 2147483647

typedef struct s_push_swap
{
	char	**input;
}	t_push_swap;

void	valid_amount(int arg);
void	valid_type(char **arg);
void	warning(char *msg, int n);

#endif
