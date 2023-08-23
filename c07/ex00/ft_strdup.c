/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:43:19 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/17 11:02:44 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*d;

	index = 0;
	d = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		d[index] = src[index];
		index++;
	}
	d[index] = '\0';
	return (d);
}
/*
int main()
{
	char	src[] = "original ou cópia";
	printf("%s", ft_strdup(src));
}*/
