/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:30:14 by ncameiri          #+#    #+#             */
/*   Updated: 2020/11/03 18:03:51 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power_recursive(int nb, int power, int remaining)
{
	if (power > 0)
	{
		remaining = nb * remaining;
		power--;
		return (ft_recursive_power_recursive(nb, power, remaining));
	}
	return (remaining);
}

int		ft_recursive_power(int nb, int power)
{
	int remaining;

	remaining = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	return (ft_recursive_power_recursive(nb, power, remaining));
}
