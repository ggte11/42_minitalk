/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:45:09 by mcardoso          #+#    #+#             */
/*   Updated: 2025/09/17 20:09:49 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _DEFAULT_SOURCE
# include "./libft/libft.h"
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data
{
	char	*str;
	char	c;
	int		len;
	int		i;
	int		bits_len;
	int		pos;
}			t_data;

#endif