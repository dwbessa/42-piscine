/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:37:23 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/18 15:24:35 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:*/

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char nb[11];
	char *nb2;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	nb2 = malloc(sizeof(char) * 11);
	if (!nb2)
		return (NULL);
	if (nbr < 0)
	{
		nb2[j] = '-';
		nbr *= -1;
		i++;
		j++;
	}
	while(nbr > 0)
	{
		nb[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	nb[i] = '\0';
	while(--i >= 0)
	{
		nb2[j++] = nb[i];
	}

	return (nb2);
}

int main(void)
{

	char *ptr;

	ptr = ft_itoa(-215);
	printf("%s", ptr);
}
