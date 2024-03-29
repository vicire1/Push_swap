/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:43:43 by vdecleir          #+#    #+#             */
/*   Updated: 2024/01/31 16:12:20 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_data *data, int i)
{
	int	temp;

	if (data->size_a > 1)
	{
		temp = data->a[0];
		data->a[0] = data->a[1];
		data->a[1] = temp;
		if (i == 0)
			write(1, "sa\n", 3);
	}
}

void	sb(t_data *data, int i)
{
	int	temp;

	if (data->size_b > 1)
	{
		temp = data->b[0];
		data->b[0] = data->b[1];
		data->b[1] = temp;
		if (i == 0)
			write(1, "sb\n", 3);
	}
}

void	ss(t_data *data)
{
	sa(data, 1);
	sb(data, 1);
	write(1, "ss\n", 3);
}
