/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readslow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:00:08 by cdeville          #+#    #+#             */
/*   Updated: 2024/03/27 17:29:36 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

//Keeps reading, wating for more

void	readslow(int time)
{
	char	buff[SIZE];
	int		n;

	while (1)
	{
		n = read(0, buff, sizeof(buff));
		while (n > 0)
		{
			write(1, buff, n);
			n = read(0, buff, sizeof(buff));
		}
		if (n == -1)
		{
			ft_putstr_fd("Read error", 2);
			exit (1);
		}
		sleep(time);
	}
}
