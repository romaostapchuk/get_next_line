/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostapch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:03:48 by rostapch          #+#    #+#             */
/*   Updated: 2017/01/17 17:03:52 by rostapch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		return_value(char **line, int ret)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && ft_strlen(*line) == 0)
		return (0);
	else if (ret == 0)
		return (0);
	else
		return (1);
}

char	*add_ending(char *str, int index, int check)
{
	char	*arr;

//printf("add ending function parameters:<%s>_<%d>_<%d>\n", str, index, check);                   //11357 leaks for 181712
	if (index >= 0 && check != 0)
	{
		arr = ft_strnew(index);
		if (!arr)
			return (NULL);
		ft_strncpy(arr, str, index);
//printf("ending_arr:%s\n", arr);
		return (arr);
	}
	return (ft_strnew(0));
}

int		check_newline(char *str, int check, int k)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == '\n' || str[i] == '\0' || str[i] == 10)
		{
			k = 0;
			return (i);
		}
	if (check == 0 && str[i++] == '\0')
		return (i);
	return (-1);
}

char	*clear_start(int index, char **buff)
{
	char	*arr;
	int		i;
//printf("clear_start_parameters<%s>%d\n", *buff, index);
	i = -1;
	if (ft_strlen(*buff) > 0)
	{
		arr = ft_strnew(ft_strlen(*buff) - index - 1);
		if (index >= 0)
		{
			while ((*buff)[index + ++i + 1])
				arr[i] = (*buff)[index + i + 1];
			ft_strdel(buff);
		}
//printf("start_arr:<%s>\n", arr);
		return (arr);
	}
//printf("start_arr:return NULL");
	return (ft_strnew(0));
}

int		get_next_line(const int fd, char **line)
{
	static char	*buff;
	int			ret;
	int			i;
	int			k;

	if (fd < 0)
		return (-1);
	ret = 1;
	i = 0;
	k = 1;
	*line = ft_strnew(0);
	if (!buff)
		buff = (char*)malloc(BUFF_SIZE + 1);
	while (ret > 0 && k)
	{
		if (ft_strlen(buff) == 0)
			ret = read(fd, buff, BUFF_SIZE);
//printf("bf_in_after read:<%s>\n", buff);
		if ((i = check_newline(buff, ret, k)) >= 0)
			break ;
//printf("%d\n", 1);
		*line = ft_strjoin(*line, buff);
//printf("<%s><%s>\n", *line, buff);
//printf("%d\n", 2);
		buff = clear_start(i, &buff);
//printf("%d\n", 3);
//printf("bf_in:<%s>\n", buff);
//printf("%d\n", 5);
	}
	char *a;
	a = add_ending(buff, i, ret);
	*line = ft_strjoin(*line, a);
	ft_strdel(&a);
	buff = clear_start(i, &buff);
//printf("bf_out:%s\n", buff);
	return (return_value(line, ret));
}
