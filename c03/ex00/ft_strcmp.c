/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:41 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 12:25:20 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
//#include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_strcmp("Hello", "Hello1"));
// 	printf("\n%d", ft_strcmp("Hello", "He"));
// 	printf("\n%d", ft_strcmp("He", "Hello"));
// 	printf("\n%d", ft_strcmp("Hello", "Hello"));
// }
