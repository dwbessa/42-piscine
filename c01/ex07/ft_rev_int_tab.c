/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:25:01 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:18:02 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

//#include <stdio.h>
// int	main(void)
// {
// 	int tab[7] = {2, 7, 1, 4, 5, 6, 9};
// 	int i;
// 	int size = 7;
// 	ft_rev_int_tab(tab, size);

// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }
