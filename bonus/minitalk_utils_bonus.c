/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <makbulut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:38:18 by makbulut          #+#    #+#             */
/*   Updated: 2022/02/22 14:22:37 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	pid_control(char *pid)
{
	int	i;

	i = 0;
	if (!pid)
		return (1);
	while (pid[i])
	{
		if (!ft_strchr("0123456789", pid[i++]))
			return (1);
	}
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}

void	ft_itoa(int pid)
{
	char	c;

	if (pid >= 10)
		ft_itoa(pid / 10);
	c = (pid % 10) + 48;
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	number;

	number = 0;
	while (*str)
		number = (10 * number) + (*str++ - 48);
	return (number);
}

/*
int main()
{
	const char a[]= "Mehmet";

	printf("%p", ft_strchr(a, 'h'));
}
*/
