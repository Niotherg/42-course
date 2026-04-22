/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:57:44 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 18:24:08 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*calloc(size_t nmemb, size_t size);
int				ft_isalnum(char *str);
int				ft_isalpha(char *str);
int				ft_isascii(char *str);
int				ft_isdigit(char *str);
int				ft_isprint(char *str);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_tolower(char *str);
char			*ft_toupper(char *str);

#endif