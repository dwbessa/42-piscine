/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:22:41 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/14 09:19:15 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)malloc(str_len(src) * sizeof(char) + 1);
	if (!d)
	{
		return (0);
	}
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*d;

	d = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!d)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		d[i].size = str_len(av[i]);
		d[i].str = av[i];
		d[i].copy = ft_strdup(av[i]);
		i++;
	}
	d[i].str = 0;
	d[i].copy = 0;
	return (d);
}
/*
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("\t| original : $%s$ @ %p\n", structs[i].str, structs[i].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[i].copy, structs[i].copy);
		printf("\t|     size : %d\n", structs[i].size);
		i++;
	}
}*/
