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

/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*arr;
	
	arr = NULL;	
	i = 0;
	if (end == start)
	{
		arr = malloc(sizeof(int));
		*arr = start;
	}
	else if (end > start)
	{
		arr = malloc((end - start + 1) * sizeof(int));
		while ((start) <= end)
			arr[i++] = start++;
	}
	else if (end < start)
	{
		arr = malloc((start - end + 1) * sizeof(int));
		while (start >= end)
			arr[i++] = start--;
	}
	if (!(arr))
		return (0);
	return (arr);
}

int	main()
{
	int i = 0;
	int a = 0;
	int b = -3;
	int *arr2;

	arr2 = ft_range(a, b);
	while (i < (abs(b - a) + 1))
	{
		printf("teste[%i] = %i\n", i, arr2[i]);
		i++;
	}
	return (0);
}
