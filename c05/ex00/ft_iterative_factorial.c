/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:04:48 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/07 22:11:58 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	b;

	b = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		while (nb > 0)
		{
			b = nb * b;
			nb--;
		}
		return (b);
	}
	else
	{
		return (0);
	}
}
/*int	main(void)
{
	printf("%d", ft_iterative_factorial(-30));
}*/
