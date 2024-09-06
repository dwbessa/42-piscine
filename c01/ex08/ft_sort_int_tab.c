/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:33:25 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:18:03 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tab[7] = {2, 7, 1, 4, 5, 6, 9};
// 	int i = 0;
// 	int size = 7;
// 	ft_sort_int_tab(tab, size);

// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }
