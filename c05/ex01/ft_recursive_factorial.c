/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:04:48 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/07 22:26:08 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	b;

	b = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		if (nb > 0)
		{
			b = nb * ft_recursive_factorial(nb - 1);
		}
		return (b);
	}
}

/*int	main()
{
	printf("%d", ft_recursive_factorial(7));
}*/
