/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <makbulut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:57:10 by makbulut          #+#    #+#             */
/*   Updated: 2022/02/22 12:27:25 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, int c);
void	ft_itoa(int pid);
int		ft_atoi(char *str);
size_t	ft_strlen(char *str);
void	chartobit(int c, int pid);
void	zerone(int signal);
void	bitochar(int d);
int		pid_control(char *pid);

#endif