/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:50:33 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:39:53 by dbessa           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(135));
// }