/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:43:14 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:36:19 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	b;

	b = 2;
	if (nb <= 1)
		return (0);
	while (b <= nb / 2)
	{
		if (!(nb % b))
			return (0);
		else
			b++;
	}
	return (1);
}

//#include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_is_prime(23));
// }