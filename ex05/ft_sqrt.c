/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:52:31 by ncameiri          #+#    #+#             */
/*   Updated: 2020/11/03 19:41:50 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i;
	int tmp;

	i = 1;
	tmp = nb;
	while ((tmp - i) > 0)
	{
		tmp = (tmp + i) / 2;
		i = nb / tmp;
	}
	if (tmp * tmp == nb)
		return (tmp);
	else
		return (0);
}
