/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 19:36:53 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 08:44:55 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 4096

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_char
{
	char	obstacles;
	char	empty;
	char	full;
}					t_char;

typedef struct		s_coord
{
	int		x;
	int		y;
}					t_coord;

void				ft_putchar(char c);
char				*ft_fill_str(char *src, char buf[BUF_SIZE], int size);
void				ft_putstr(char*str);
int					ft_strlen(char *str);
char				**ft_cut_in_line(char *str, char *return_to_the_line,
t_coord *len);
char				**ft_brute_force(char **tab, t_char dot, t_coord len);
void				ft_print_tab(char **tab);
char				*ft_strdup(char *src);
char				*ft_strndup(char *src);
int					ft_atoi(char *str);
int					ft_look_if_map_is_good(char **tab, t_coord len, t_char dot);

#endif
