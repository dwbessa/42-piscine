/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:27:05 by dbessa            #+#    #+#             */
/*   Updated: 2023/07/29 22:11:23 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (r == 1 && (c == 1 || c == x))
				ft_putchar('o');
			else if (r == y && (c == x || c == 1))
				ft_putchar('o');
			else if (r == 1 || r == x)
				ft_putchar('-');
			else if ((c == 1) || (c == y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
