/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:06:34 by ncameiri          #+#    #+#             */
/*   Updated: 2020/11/03 15:41:29 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	flag;
	int	a;

	flag = 0;
	a = 2;
	if (nb < 2)
		return (0);
	while (a < nb)
	{
		if (nb % a == 0 && a != nb)
			flag = 1;
		a++;
	}
	if (flag == 1)
		return (0);
	else
		return (1);
}
