/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <makbulut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:55:02 by makbulut          #+#    #+#             */
/*   Updated: 2022/02/22 14:20:48 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bitochar(int d)
{
	static unsigned char	writ;
	static int				i = 7;

	writ += d << i;
	if (i == 0)
	{
		i = 7;
		write(1, &writ, 1);
		writ = 0;
	}
	else
		i--;
}

void	zerone(int signal)
{
	if (signal == SIGUSR1)
		bitochar(1);
	else if (signal == SIGUSR2)
		bitochar(0);
}

int	main(void)
{
	signal(SIGUSR1, zerone);
	signal(SIGUSR2, zerone);
	write(1, "pid : ", 6);
	ft_itoa(getpid());
	while (1)
		pause();
	return (0);
}
