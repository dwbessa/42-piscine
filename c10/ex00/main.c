/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:26 by dbessa            #+#    #+#             */
/*   Updated: 2024/09/06 13:13:25 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	buf;
	if (ac == 1)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 19);
	}
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	write(1, "\n", 1);
}
