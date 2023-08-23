/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:08:18 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/07 21:58:41 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	else if (power < 0)
		return (0);
	else
		return (1);
}

/*int	main()
{
	printf("%d", ft_recursive_power(2, 10));
}*/
