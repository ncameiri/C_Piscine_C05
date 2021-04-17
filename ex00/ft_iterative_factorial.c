/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:37:09 by ncameiri          #+#    #+#             */
/*   Updated: 2020/11/03 15:55:47 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	if (nb < 0 || nb > 2147483647)
		return (0);
	while (nb > 0)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
