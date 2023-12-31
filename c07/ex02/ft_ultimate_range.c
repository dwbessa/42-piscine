/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:13:10 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/17 11:56:53 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	calc;
	int	*result;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	calc = max - min;
	result = (int *)malloc(calc * sizeof(int));
	if (!result)
	{
		*range = 0;
		return (-1);
	}
	*range = result;
	i = 0;
	while (i < calc)
	{
		result[i] = min + i;
		i++;
	}
	return (calc);
}
/*
int	main(void)
{
	int    min;
	int    max;
	int    *tab;
	int    size;
	int    i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
