/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:16:00 by jomaia            #+#    #+#             */
/*   Updated: 2025/09/17 20:11:16 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	print_reset(t_data *data)
{
	ft_printf("%s\n", data->str);
	free(data->str);
	data->str = NULL;
	data->bits_len = 31;
	data->len = 0;
}

static int	add_char_to_msg(t_data *data)
{
	if (!data->str)
	{
		data->str = malloc(data->len + 1);
		if (!data->str)
			exit(1);
		data->pos = 0;
	}
	data->str[data->pos++] = data->c;
	data->c = 0;
	data->i = 7;
	if (data->pos == data->len)
	{
		data->str[data->pos] = '\0';
		print_reset(data);
		return (1);
	}
	return (0);
}

void	handler(int sig, siginfo_t *info, void *context)
{
	static t_data	data = {.c = 0, .bits_len = 31, .len = 0, .i = 7};

	(void)context;
	if (data.bits_len >= 0)
		data.len |= ((sig == SIGUSR2) << data.bits_len--);
	else
	{
		if (sig == SIGUSR2)
			data.c |= (1 << data.i);
		if (data.i-- == 0)
		{
			if (add_char_to_msg(&data))
			{
				kill(info->si_pid, SIGUSR2);
				return ;
			}
		}
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	signal;

	signal.sa_sigaction = handler;
	sigemptyset(&signal.sa_mask);
	signal.sa_flags = SA_SIGINFO;
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	sigaction(SIGUSR1, &signal, NULL);
	sigaction(SIGUSR2, &signal, NULL);
	while (1)
		pause();
}
