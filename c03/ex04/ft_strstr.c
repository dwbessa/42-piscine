/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:59:26 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:27:45 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

//#include <stdio.h>
// int	main()
// {
// 	char str[] = "a piscina da 42 é muito legal";
// 	char find[] = "42";
// 	printf("%s", ft_strstr(str, find));
// }
