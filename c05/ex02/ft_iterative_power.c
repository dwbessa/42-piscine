/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:08:18 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:34:59 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}

//#include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_iterative_power(2, 10));
// }
