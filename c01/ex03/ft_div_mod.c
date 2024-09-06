/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:44:56 by dbessa            #+#    #+#             */
/*   Updated: 2023/07/31 19:47:09 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}


//#include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
	
// 	a = 5;
// 	b = 2;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d | %d", div, mod);
// }
