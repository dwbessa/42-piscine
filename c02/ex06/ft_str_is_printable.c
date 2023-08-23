/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:36:40 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/02 19:49:36 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char	str[] = "aebcjksjdpaksl";
	printf("%d", ft_str_is_printable(str));
}
