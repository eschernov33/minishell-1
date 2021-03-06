/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_pwd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 15:01:27 by gjessica          #+#    #+#             */
/*   Updated: 2020/07/27 15:02:39 by gjessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *get_cur_path()
{
	char cwd[PATH_MAX];
  	return (getcwd(cwd, sizeof(cwd)));
}

int start_pwd(char *line)
{
	if (line && *(line + skip_whitespace(line)) != '\0') // pwd doesn't care about arguments. 
														// It works with any number of arguments. (only on Linux)
		ft_putstr("pwd: too many arguments");
	else
		ft_putstr(get_cur_path());
	ft_putstr("\n");
	return (0);
}
