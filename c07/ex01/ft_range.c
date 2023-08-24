/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:08:43 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/17 11:14:38 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	if (min >= max)
		return (NULL);
	str = malloc((max - min) * 4);
	if (!(str))
		return (0);
	i = 0;
	while ((min + i) < max)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
/*
int	main()
{
	int i = 0;
	int a = 8;
	int b = 21;
	int *arr2;

	arr2 = ft_range(a, b);
	while ( i < b - a)
	{
		printf("teste[%i] = %i\n", i, arr2[i]);
		i++;
	}
	return (0);
}*/