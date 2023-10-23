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

#include "minitalk_bonus.h"

int	get_client_pid(char *j, int c)
{
	static unsigned int	pid_client;
	static unsigned int	client_pid;

	if (*j <= 31)
	{
		pid_client += c << *j;
		if (*j == 31)
		{
			client_pid = pid_client;
			pid_client = 0;
			(*j)++;
			return (client_pid);
		}
		(*j)++;
	}
	return (0);
}

void	bitochar(int d)
{
	static unsigned char	writ;
	static int				i = 7;
	static char				j;
	static int				client_pid;

	if (j <= 31)
	{
		client_pid = get_client_pid(&j, d);
		return ;
	}
	writ += d << i;
	if (i == 0)
	{
		i = 7;
		if ((char)writ != '\0')
			write(1, &writ, 1);
		else
		{
			j = 0;
			kill(client_pid, SIGUSR2);
		}
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
	write(1, "pid : ", 6);
	ft_itoa(getpid());
	write(1, "\n", 1);
	signal(SIGUSR1, zerone);
	signal(SIGUSR2, zerone);
	while (1)
		pause();
	return (0);
}
