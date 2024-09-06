/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:04:48 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:33:44 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	b;

	b = 1;
	if (nb == 0)
		return (1);
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
		return (0);
}

//#include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(-30));
// }
