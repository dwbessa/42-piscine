/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:27:18 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:25:57 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>
// int	main()
// {
// 	char src[] = "Programa";
// 	char dest[] = "Rodou o ";
// 	printf("%s", ft_strcat(dest, src));
// }
