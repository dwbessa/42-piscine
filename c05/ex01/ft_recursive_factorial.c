/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:04:48 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:34:20 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	b;

	b = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		if (nb > 0)
			b = nb * ft_recursive_factorial(nb - 1);
		return (b);
	}
}

//#include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_recursive_factorial(7));
// }
