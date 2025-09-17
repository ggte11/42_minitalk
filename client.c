/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:31:23 by mcardoso          #+#    #+#             */
/*   Updated: 2025/09/17 20:10:17 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	recieved(int sig)
{
	if (sig == SIGUSR2)
	{
		ft_printf("recieved");
		exit(0);
	}
}

static void	send_len(char *str, int pid)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 31;
	while (i >= 0)
	{
		if ((len >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		usleep(1500);
	}
}

static void	send_str(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		usleep(1500);
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	signal(SIGUSR1, recieved);
	signal(SIGUSR2, recieved);
	if (argc != 3)
	{
		ft_printf("Invalid format\n Use ./client PID message\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 1 || kill(pid, 0) == -1)
		return (ft_printf("Invalid PID\n"), 1);
	send_len(argv[2], pid);
	while (*argv[2])
		send_str(*argv[2]++, pid);
	pause();
}
