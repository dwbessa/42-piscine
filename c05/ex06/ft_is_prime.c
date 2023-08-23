/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:43:14 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/08 12:12:09 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*int	main()
{
	printf("%d", ft_is_prime(23));
}*/
