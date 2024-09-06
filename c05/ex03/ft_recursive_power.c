/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:08:18 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:35:23 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else if (power < 0)
		return (0);
	else
		return (1);
}

//#include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_recursive_power(2, 10));
// }
